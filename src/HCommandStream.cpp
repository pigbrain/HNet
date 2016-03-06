
#include "HPacket.h"
#include "HLink.h"
#include "HCommand.h"
#include "HCommandDesc.h"
#include "HCommandStream.h"
#include "HCommandCommunicator.h"
#include "HNetLog.h"


HCommandStream::HCommandStream(HLink* pOwner)
{
	m_pOwner = pOwner;
	memset(m_szBuffer, 0, sizeof(m_szBuffer));
	m_nBufferNext = 0;
}

HCommandStream::~HCommandStream()
{
	for(list<HCommand*>::iterator it = m_CommandQueue.begin(); it != m_CommandQueue.end(); it++)
	{
		SAFE_DELETE(*it);
	}
	m_CommandQueue.clear();
}

bool HCommandStream::Read(char* pBuffer, int nBufferLen)
{
	if (true == IsBufferEmpty())
	{
		if (false == ReadBuffer( pBuffer, nBufferLen ))
		{
			return false;
		}
	}
	else
	{
		int nRemainLen = StoreBuffer(pBuffer, nBufferLen);

		if (false == EstimateBufferToCmd())
			return true;

		int nSpareData =  MakeCommand(m_szBuffer, m_nBufferNext);

		if (nSpareData >= 0)
		{
			m_nBufferNext = 0;
			memset(m_szBuffer, 0, sizeof(m_szBuffer));
			if (nRemainLen < 0)
				HNET_LOG(HNET_LOG_FATAL, "ID:%d buffer's remain size:%d is strange ", m_pOwner->GetID(), nRemainLen);

			return ReadBuffer(pBuffer+ (nBufferLen - nRemainLen), nRemainLen);
		}
		else if (nSpareData < 0)
		{
			HNET_LOG(HNET_LOG_FATAL, "ID:%d fail to make command[1]. ret : %d", m_pOwner->GetID(), nSpareData);
			return false;
		}
	}

	return true;
}

HCommand* HCommandStream::GetCommand()
{
	list<HCommand*>::iterator it = m_CommandQueue.begin();
	if (it != m_CommandQueue.end()) 
	{
		HCommand* pCommand = *it;
		m_CommandQueue.pop_front();
		return pCommand;
	} 

	return NULL;
}


bool HCommandStream::IsBufferEmpty()
{
	if (0 == m_nBufferNext)
		return true;

	return false;
}

bool HCommandStream::ReadBuffer( char* pBuffer, int nBufferLen )
{
	HPacketHeader* pPacket = (HPacketHeader*)pBuffer;

	if (nBufferLen < sizeof(HPacketHeader) || nBufferLen - sizeof(HPacketHeader) < atoi(pPacket->szSize))
	{
		AddBuffer(pBuffer, nBufferLen);
		return true;
	}

	int nSpareData =  MakeCommand(pBuffer, nBufferLen);
	if (nSpareData > 0)
	{
		return ReadBuffer(pBuffer+(nBufferLen-nSpareData), nSpareData);
	}
	else if (nSpareData < 0)
	{
		HNET_LOG(HNET_LOG_FATAL, "ID:%d fail to make command[2]. ret : %d", m_pOwner->GetID(), nSpareData);
		return false;
	}

	return true;
}

void HCommandStream::AddBuffer(char* pBuffer, int nLen)
{
	if (nLen <= 0) {
		return;
	}

	memcpy(m_szBuffer+m_nBufferNext, pBuffer, nLen);
	m_nBufferNext += nLen;
}


bool HCommandStream::EstimateBufferToCmd()
{
	if (m_nBufferNext < sizeof(HPacketHeader)) 
		return false;

	HPacketHeader* pPacket = (HPacketHeader*)m_szBuffer;
	if (m_nBufferNext - sizeof(HPacketHeader) < atoi(pPacket->szSize)) 
		return false;

	return true;
}


int HCommandStream::StoreBuffer(char* pBuffer, int nLen)
{
	if (nLen <= 0) return 0;
	
	int nRemainLen = nLen;
	if (m_nBufferNext + nRemainLen < sizeof(HPacketHeader))
	{		
		AddBuffer(pBuffer, nRemainLen);
		return 0;
	}

	if (m_nBufferNext < sizeof(HPacketHeader))
	{
		int nLackSize = sizeof(HPacketHeader) - m_nBufferNext;
		if (nRemainLen > nLackSize)
		{
			AddBuffer(pBuffer, nLackSize);
			nRemainLen -= nLackSize;
		}
		else
		{
			AddBuffer(pBuffer, nRemainLen);
			return 0;
		}
	}

	int nOver = 0;
	if (m_nBufferNext >= sizeof(HPacketHeader))
	{
		nOver = m_nBufferNext - sizeof(HPacketHeader);
	}

	HPacketHeader* pPacket = (HPacketHeader*)m_szBuffer;
	int nReadedLen = nLen - nRemainLen;
	
	int nPacketSize = atoi(pPacket->szSize);
	if (nPacketSize  > nOver)
	{
		int nLackSize = nPacketSize - nOver;
		if (nRemainLen > nLackSize)
		{
			AddBuffer(pBuffer + nReadedLen, nLackSize);
			nRemainLen -= nLackSize;
		}
		else
		{
			AddBuffer(pBuffer + nReadedLen, nRemainLen);
			return 0;
		}
	} 
/*
	if (nRemainLen < atoi(pPacket->szSize) - nOver)
	{
		AddBuffer(pBuffer + nReadedLen, nRemainLen);
		return 0;
	}

	int nLackSize = atoi(pPacket->szSize) - nOver;
	AddBuffer(pBuffer + nReadedLen, nLackSize);
	nRemainLen -= nLackSize;
*/
	return nRemainLen;
}

int  HCommandStream::MakeCommand(char* pBuffer, int nBufferLen)
{
	int nCurrentBufferLen = nBufferLen;
	HPacketHeader* pPacket = (HPacketHeader*)pBuffer;
	int nCmdCount = 0;

	int nPacketSize = atoi(pPacket->szSize);

	if ((nPacketSize > nCurrentBufferLen - sizeof(HPacketHeader)) || (nPacketSize < 0)) 
		return 0;

	if (nPacketSize >= MAX_PACKET_SIZE)
		return -1;

	HCommand* pCommand = new HCommand();

	int nSpare = pCommand->BuildCommand(pBuffer, nBufferLen);
	if (0 > nSpare)
	{
		HNET_LOG(HNET_LOG_FATAL, "ID:%d fail to build command. ret : %d", m_pOwner->GetID(), nSpare);
		SAFE_DELETE(pCommand);
		return -1;
	}
	
	m_CommandQueue.push_back(pCommand);
	

	return nSpare;
}


void HCommandStream::ClearBuffer()
{
	memset(m_szBuffer, 0, sizeof(m_szBuffer));
}


