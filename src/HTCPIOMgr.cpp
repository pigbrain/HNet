
#include "HPacket.h"
#include "HSocket.h"
#include "HTCPSocket.h"
#include "HServer.h"
#include "HEpoll.h"
#include "HCommandCommunicator.h"
#include "HLink.h"
#include "HLinkMap.h"
#include "HConnector.h"
#include "HIOMgr.h"
#include "HTCPIOMgr.h"
#include "HCommand.h"
#include "HCommandParameter.h"
#include "HCommandCommunicator.h"
#include "HCommandStream.h"
#include "HCommandRouter.h"
#include "CommandTable_HNET.h"
#include "HNetLog.h"

HTCPIOMgr::HTCPIOMgr(int nFD,int nMinID, int nMaxID, HCommandCommunicator* pCommandCommunicator) 
	: HIOMgr(nFD)
{
	m_nQueueSize = nMaxID - nMinID + 1;
	m_pIDQueue = new int[m_nQueueSize];
	m_nHead = 0;
	m_nTail = 0;

	m_pCommandCommunicator = pCommandCommunicator;

	for (int i = 0; i < m_nQueueSize; i++) 
	{
		m_pIDQueue[i] = nMinID + i;
	}
}

HTCPIOMgr::~HTCPIOMgr()
{
	Destroy();
	SAFE_DELETE(m_pLinkMap);
	SAFE_DELETE_ARRAY(m_pIDQueue);
}

bool HTCPIOMgr::Init()
{
	if (true == m_bInit)
		return false;

	if (m_nFD < 0)
		return false;

	m_pEpoll = new HEpoll(1, 0, 1);
	if (false == m_pEpoll->Create())
		return false;
	
	m_pEpoll->AddEvent(m_nFD, E_EV_IN);
	
	m_pLinkMap = new HLinkMap();

	m_bInit = true;

	return true;
}

void HTCPIOMgr::Do()
{
	int nEvCount = m_pEpoll->Run();
	
	for (int i = 0; i < nEvCount; i++)
	{
		if (m_pEpoll->GetFD(i) == m_nFD)
		{
			HConnector cConnector;
			read(m_nFD, (char*)&cConnector, sizeof(HConnector));

			int nID = GetID();
			HLink* pLink = CreateLink(nID, cConnector);
			if (NULL == pLink)
				continue;

			HLinkPtr cLinkPtr(pLink);
			int nFD = cLinkPtr->GetSocket()->GetFD();
			m_pLinkMap->AddLink(nFD, cLinkPtr);

			m_pEpoll->AddEvent(cConnector.GetFD(), E_EV_IN);

			PostConnectLink(nID, nFD, cLinkPtr);
		}
		else 
		{
			HLinkPtr cLinkPtr = m_pLinkMap->GetLink(m_pEpoll->GetFD(i));
			
			if (m_pEpoll->GetEvent(i) & E_EV_IN)
			{
				if (false == Read(cLinkPtr))
				{
					Disconnect(cLinkPtr, "Read Fail");
				}
			}
			if (m_pEpoll->GetEvent(i) & E_EV_OUT)
			{
				if (false == Write(cLinkPtr))
				{
					Disconnect(cLinkPtr, "Write Fail");
				}
			}
		}
	}
}

void HTCPIOMgr::Disconnect(HLinkPtr& rLinkPtr, const char* szErr)
{
	cout << szErr << endl;
	int nFD = rLinkPtr->GetSocket()->GetFD();
	int nID = rLinkPtr->GetID();

	PostDisconnectLink(nID, nFD, rLinkPtr);

	m_pLinkMap->DeleteLink(nFD);
	m_pEpoll->DelEvent(nFD);
	ReturnID(nID);

	HNET_LOG(HNET_LOG_DEBUG, "diconnect socket:%d ", nFD);
}

void HTCPIOMgr::Destroy()
{
	m_bDestroy = true;
}

HLink* HTCPIOMgr::CreateLink(int nID, HConnector& rConnector)
{
	HTCPSocket* pSocket = new HTCPSocket();
	if (NULL == pSocket)
		return NULL;

	pSocket->SetFD(rConnector.GetFD()); 
	pSocket->SetAddr(rConnector.GetIP(), rConnector.GetPort());
	pSocket->SetAddr(*rConnector.GetSockAddr());
	
	pSocket->MakeNonBlockSocket();
	
	HLink* pLink = new HLink(nID, pSocket, m_pEpoll);

	return pLink;
}


void HTCPIOMgr::PostConnectLink(int nID, int nFD, HLinkPtr& rLinkPtr)
{
	char szID[10] = {0, };
	char szFD[10] = {0, };

	sprintf(szID, "%d", nID);
	sprintf(szFD, "%d", nFD);

	HCommand* pCommand = new HCommand();
	pCommand->m_LinkPtr = rLinkPtr;
	pCommand->CreateCommand(
		HC_CONNECT_LINK,
		2, 
		new HCommandParameterChar(szID, sizeof(szID)),
		new HCommandParameterChar(szFD, sizeof(szFD)));

	m_pCommandCommunicator->Post(pCommand);
}

void HTCPIOMgr::PostDisconnectLink(int nID, int nFD, HLinkPtr& rLinkPtr)
{
	char szID[10] = {0, };
	char szFD[10] = {0, };

	sprintf(szID, "%d", nID);
	sprintf(szFD, "%d", nFD);

	HCommand* pCommand = new HCommand();
	pCommand->m_LinkPtr = rLinkPtr;
	pCommand->CreateCommand(
		HC_DISCONNECT_LINK,
		2, 
		new HCommandParameterChar(szID, sizeof(szID)),
		new HCommandParameterChar(szFD, sizeof(szFD)));

	m_pCommandCommunicator->Post(pCommand);
}

int HTCPIOMgr::GetID()
{
	int nID = m_pIDQueue[m_nHead];
	m_pIDQueue[m_nHead] = -1;
	m_nHead++;

	return nID;
}

void HTCPIOMgr::ReturnID(int nID)
{
	m_nHead--;
	m_pIDQueue[m_nHead] = nID;
}

bool HTCPIOMgr::Read(HLinkPtr& rLinkPtr)
{
	if (false == rLinkPtr->IsValidLink())
		return false;

	HSocket* pSocket = rLinkPtr->GetSocket();
	if (NULL == pSocket)
		return false;
	
	if (false == rLinkPtr->ReadStream())
		return false;

	while (HCommand* pCommand = rLinkPtr->GetCommand())
	{
		if (NULL == pCommand)
			break;

		if (NULL == pCommand->m_pCommandDesc)
		{
			return false;
		}
		pCommand->m_LinkPtr = rLinkPtr;

		m_pCommandCommunicator->Post(pCommand);
	}

	return true;
}

bool HTCPIOMgr::Write(HLinkPtr& rLinkPtr)
{
	HSocket* pSocket = rLinkPtr->GetSocket();
	if (NULL == pSocket)
		return false;

	HCommandRouter*	pCommandRouter = rLinkPtr->GetCommandRouter();
	if (NULL == pCommandRouter)
		return false;
	
	if (false == rLinkPtr->SendStream())
		return false;

	rLinkPtr->OffWritableData();

	return true;
}











