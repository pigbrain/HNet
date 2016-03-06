
#include "HPacket.h"
#include "HSocket.h"
#include "HTCPSocket.h"
#include "HClient.h"
#include "HTCPClient.h"
#include "HLink.h"
#include "HEpoll.h"

#include "HCommand.h"
#include "HCommandParameter.h"
#include "HCommandCommunicator.h"
#include "HCommandRouter.h"
#include "CommandTable_HNET.h"



HTCPClient::HTCPClient(int nID, const char* szIP, int nPort, HCommandCommunicator* pCommandCommunicator)
 : HClient(nID, szIP, nPort)
{
	m_nID = nID;
	m_nPort = nPort;
	m_pEpoll = NULL;
	m_bConnected = false;
	m_bDestroy = false;

	m_pCommandCommunicator = pCommandCommunicator;
}

HTCPClient::~HTCPClient()
{
	SAFE_DELETE(m_pEpoll);
	//SAFE_DELETE(m_pClientSocket);
}

bool HTCPClient::CreateNetwork()
{
	m_pEpoll = new HEpoll(1, 0, 5);
	if (false == m_pEpoll->Create())
		return false;

	//m_pClientSocket = new HTCPSocket();
	//m_pClientSocket->SetAddr(m_strIP.c_str(), m_nPort);
	
	return true;
}

bool HTCPClient::Connect()
{
	if (1 != m_LinkPtr.GetRefCount())
		return false;
	
	m_pClientSocket = new HTCPSocket();
	m_pClientSocket->SetAddr(m_strIP.c_str(), m_nPort);

	if (false == m_pClientSocket->Create())
		return false;

	int nOption = 1;
	socklen_t nOptLen = sizeof(nOption);
	setsockopt(m_pClientSocket->GetFD(), SOL_SOCKET, SO_REUSEADDR, &nOption, nOptLen);
	
	int nRet = -1;
	nRet = ::connect(m_pClientSocket->GetFD(), (struct sockaddr *)m_pClientSocket->GetSockAddr(), sizeof(struct sockaddr_in));
	if (nRet < 0)
	{
		m_pClientSocket->Close();
		return false;
	}

	MakeNonBlockSocket();

	m_nFD = m_pClientSocket->GetFD();

	m_pEpoll->AddEvent(m_nFD, E_EV_IN);
	HLink* pLink = new HLink(m_nID, m_pClientSocket, m_pEpoll);
	m_LinkPtr = HLinkPtr(pLink);
	
	PostConnectLink();

	m_bConnected = true;

	return true;
}

void HTCPClient::Run()
{
	while (false == m_bDestroy)
		Do();
}

void HTCPClient::Do()
{
	if (false == m_bConnected)
	{
		Connect();
		return;
	}

	int nEvCount = m_pEpoll->Run();
	for (int i = 0; i < nEvCount; i++)
	{
		if (m_pEpoll->GetEvent(i) & E_EV_IN)
		{
			if (false == Read())
			{
				Disconnect();
				continue;
			}
		}
		if (m_pEpoll->GetEvent(i) & E_EV_OUT)
		{
			if (false == Write())
			{
				Disconnect();
				continue;
			}
		}
	}
}

void HTCPClient::Destroy()
{
	m_bDestroy = true;
}


void HTCPClient::PostConnectLink()
{
	char szID[10] = {0, };
	char szFD[10] = {0, };

	sprintf(szID, "%d", m_nID);
	sprintf(szFD, "%d", m_nFD);

	HCommand* pCommand = new HCommand();
	pCommand->m_LinkPtr = m_LinkPtr;
	pCommand->CreateCommand(
		HC_CONNECT_LINK,
		2, 
		new HCommandParameterChar(szID, sizeof(szID)),
		new HCommandParameterChar(szFD, sizeof(szFD)));

	m_pCommandCommunicator->Post(pCommand);
}

void HTCPClient::PostDisconnectLink()
{
	char szID[10] = {0, };
	char szFD[10] = {0, };

	sprintf(szID, "%d", m_nID);
	sprintf(szFD, "%d", m_nFD);

	HCommand* pCommand = new HCommand();
	pCommand->m_LinkPtr = m_LinkPtr;
	pCommand->CreateCommand(
		HC_DISCONNECT_LINK,
		2, 
		new HCommandParameterChar(szID, sizeof(szID)),
		new HCommandParameterChar(szFD, sizeof(szFD)));

	m_pCommandCommunicator->Post(pCommand);
}

void HTCPClient::Disconnect()
{
	PostDisconnectLink();
	
	if (NULL != m_pClientSocket)
		m_pEpoll->DelEvent(m_pClientSocket->GetFD());
	
	m_pClientSocket->Close();

	m_bConnected = false;
}

bool HTCPClient::Read()
{
	if (false == m_LinkPtr->IsValidLink())
		return false;

	HSocket* pSocket = m_LinkPtr->GetSocket();
	if (NULL == pSocket)
		return false;
	
	if (false == m_LinkPtr->ReadStream())
		return false;

	while (HCommand* pCommand = m_LinkPtr->GetCommand())
	{
		if (NULL == pCommand)
			break;

		if (NULL == pCommand->m_pCommandDesc)
		{
			// command error;
			return false;
		}
		pCommand->m_LinkPtr = m_LinkPtr;

		m_pCommandCommunicator->Post(pCommand);
	}

	return true;
}

bool HTCPClient::Write()
{
	HSocket* pSocket = m_LinkPtr->GetSocket();
	if (NULL == pSocket)
		return false;

	HCommandRouter*	pCommandRouter = m_LinkPtr->GetCommandRouter();
	if (NULL == pCommandRouter)
		return false;
	
	if (false == m_LinkPtr->SendStream())
		return false;

	m_LinkPtr->OffWritableData();

	return true;
}

