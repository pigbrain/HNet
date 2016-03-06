

#include "HPacket.h"
#include "HSocket.h"
#include "HEpoll.h"
#include "HCommand.h"
#include "HCommandStream.h"
#include "HCommandRouter.h"
#include "HLink.h"
#include "HNetLog.h"

HLink::HLink(int nID, HSocket* pSocket, HEpoll* pEpoll)
{
	m_nID = nID;
	m_pSocket = pSocket;
	m_pEpoll = pEpoll;
	m_pCommandStream = new HCommandStream(this);
	m_pCommandRouter = new HCommandRouter(this);

	pthread_mutex_init( &m_Lock, NULL);

	m_bDisconnect = false;
}

HLink::~HLink()
{
	SAFE_DELETE(m_pSocket);
	SAFE_DELETE(m_pCommandStream);
	SAFE_DELETE(m_pCommandRouter);
	pthread_mutex_destroy( &m_Lock );
}

HLink& HLink::operator = (const HLink& rLink)
{  
	if (this != &rLink)
	{
		SAFE_DELETE(m_pSocket);
		SAFE_DELETE(m_pCommandStream);
		SAFE_DELETE(m_pCommandRouter);
		pthread_mutex_destroy( &m_Lock );
	}

	m_Lock = rLink.m_Lock;
	m_pSocket = rLink.m_pSocket;
	m_pCommandStream = rLink.m_pCommandStream;
	m_pCommandRouter = rLink.m_pCommandRouter;

	return *this;
}


HLink* HLink::operator = (const HLink* pLink)
{
	if (this != pLink)
	{
		SAFE_DELETE(m_pSocket);
		SAFE_DELETE(m_pCommandStream);
		SAFE_DELETE(m_pCommandRouter);
		pthread_mutex_destroy( &m_Lock );
	}

	m_Lock = pLink->m_Lock;
	m_pSocket = pLink->m_pSocket;
	m_pCommandStream = pLink->m_pCommandStream;
	m_pCommandRouter = pLink->m_pCommandRouter;


	return this;
}

bool HLink::Disconnect(const char* szReason)
{
	Disconnect();
}

void HLink::Disconnect()
{
	m_bDisconnect = true;
	
	if (m_pSocket != NULL)
		m_pSocket->Shutdown();
}


void HLink::Lock()
{
	pthread_mutex_lock( &m_Lock );
}

void HLink::Unlock()
{
	pthread_mutex_unlock( &m_Lock );
}

bool HLink::SendStream()
{
	m_pCommandRouter->ClearRecvBuffer();
	
	if (false == Send(m_pCommandRouter->GetLazyRouteQueue()))
		return false;

	if (true == m_pCommandRouter->IsRecvBufferFull())
		return true;

	if (false == Send(m_pCommandRouter->GetRouteQueue()))
		return false;

	return true;
}

bool HLink::Send(list<TD_ROUTE_INFO>* pRouteQueue)
{
	if (NULL == pRouteQueue)
		return true;

	int nWrite = 0;
	int nWritten = 0;
	int nOffset = 0;
	char* pBuffer = NULL;
	bool bBufferFull = false;

	for (list<TD_ROUTE_INFO>::iterator it = pRouteQueue->begin(); it != pRouteQueue->end(); )
	{	
		if (true == m_pCommandRouter->IsRecvBufferFull()) 
		{
			m_pCommandRouter->LazyRoute((*it).pBuffer, (*it).nLength, (*it).nOffset);
			it = pRouteQueue->erase(it);
			continue;
		}

		nWrite = (*it).nLength;
		pBuffer = (*it).pBuffer + (*it).nOffset;
		nOffset = (*it).nOffset;
		while (nWrite > 0)
		{
			nWritten = write(m_pSocket->GetFD(), pBuffer, nWrite);
			
			HNET_LOG(HNET_LOG_DEBUG, "ID:%d write stream %d bytes, total %d bytes", m_nID, nWritten, nWrite);
			HNET_HEX_DUMP(HNET_LOG_DEBUG, pBuffer, nWrite);


			if (nWritten <= 0)
			{
				if(errno != EWOULDBLOCK)
					return false;
				m_pCommandRouter->LazyRoute((*it).pBuffer, (*it).nLength - nOffset, nOffset);
				m_pCommandRouter->SetRecvBufferFull(true);
				break;
			}
			else if (nWritten < nWrite)
			{
				nWrite -= nWritten;
				pBuffer += nWritten;
				nOffset += nWritten;

				m_pCommandRouter->LazyRoute((*it).pBuffer, (*it).nLength - nOffset, nOffset);
				m_pCommandRouter->SetRecvBufferFull(true);
				
				break;
			}
			else
			{
				SAFE_DELETE_ARRAY((*it).pBuffer);
				break;
			}
			
		}
		
		it = pRouteQueue->erase(it);
	}

	return true;
}

bool HLink::ReadStream()
{
	char szBuffer[MAX_PACKET_SIZE];
	bool bDone = false;
	while ( false == bDone )
	{
		memset(szBuffer, 0, sizeof(szBuffer));
		int nRead = read(m_pSocket->GetFD(), szBuffer, MAX_PACKET_SIZE);

		if(nRead == 0)
		{
			return false;
		}
		else if (nRead < 0)
		{
			switch (errno)
			{
			case EAGAIN :		//	read all data
				bDone = true;
				break;
			case EINTR	:	
				bDone = false;
				break;
			default : 
				HNET_LOG(HNET_LOG_FATAL, "ID:%d read stream error : %d", GetID(), strerror(errno));
				cout << "stderr : " << strerror(errno) << endl;
				return false;
			}
		}
		else
		{
			HNET_LOG(HNET_LOG_DEBUG, "ID:%d read stream %d bytes", GetID(), nRead);
			if (false == m_pCommandStream->Read(szBuffer, nRead))
				return false;
		}
	}

	return true;
}

bool HLink::Route(HCommand* pCommand)
{
	if (NULL == pCommand) {
		SAFE_DELETE(pCommand);
		return false;
	}
	char* pPacket = pCommand->BuildRawPacket();
	if (NULL == pPacket) {
		SAFE_DELETE(pCommand);
		return false;
	}
	
	HPacketHeader* pHeader = (HPacketHeader*)pPacket;
	int nSize = atoi(pHeader->szSize) + sizeof(HPacketHeader);
	m_pCommandRouter->Route(pPacket, nSize, 0);

	m_pEpoll->ModEvent(m_pSocket->GetFD(), E_EV_IN | E_EV_OUT);
	
	SAFE_DELETE(pCommand);

	return true;
}

bool HLink::IsValidLink()
{
	if (NULL == m_pSocket)
		return false;
	if (NULL == m_pCommandStream)
		return false;

	int nFD = m_pSocket->GetFD();
	if (nFD < 0)
		return false;

	int nRead = 0;
	if (ioctl(nFD, FIONREAD, &nRead) < 0)
		return false;

	if (nRead <= 0)
		return false;

	return true;
}

void HLink::OnWritableData()
{
	m_pEpoll->ModEvent(m_pSocket->GetFD(), E_EV_IN | E_EV_OUT);
}

void HLink::OffWritableData()
{
	if (false == m_pCommandRouter->HaveWritableData())
		m_pEpoll->ModEvent(m_pSocket->GetFD(), E_EV_IN);
}

HCommand* HLink::GetCommand()
{
	return m_pCommandStream->GetCommand();
}
