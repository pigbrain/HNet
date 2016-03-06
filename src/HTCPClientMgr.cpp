
#include "HSocket.h"
#include "HTCPSocket.h"
#include "HLink.h"
#include "HClient.h"
#include "HTCPClient.h"
#include "HEpoll.h"
#include "HClientMgr.h"
#include "HCommandCommunicator.h"
#include "CommandTable_HNET.h"
#include "HTCPClientMgr.h"

void* ClientWorker(void* args);


HTCPClientMgr::HTCPClientMgr()
{
	m_pTCPClient = NULL;
	m_pCommandCommunicator = NULL;
	m_nThreadID = -1;
	m_bCreated = false;
}

HTCPClientMgr::~HTCPClientMgr()
{
	Shutdown();

	SAFE_DELETE(m_pCommandCommunicator);
	SAFE_DELETE(m_pTCPClient);

}


bool HTCPClientMgr::CreateNetwork(int nID, const char* szIP, int nPort)
{
	if (true == m_bCreated)
		return false;

	if (NULL == szIP)
		return false;

	if (nPort <= 0)
		return false;
	
	CommandTable_HNET::AddCommandTable();

	m_pCommandCommunicator = new HCommandCommunicator();

	m_pTCPClient = new HTCPClient(nID, szIP, nPort, m_pCommandCommunicator);
	if (false == m_pTCPClient->CreateNetwork())
		return false;
	
	int nRet = pthread_create(&m_nThreadID, NULL, ClientWorker, (void*)m_pTCPClient);
	if (0 != nRet)
		return false;

	m_bCreated = true;

	return true;
}

void HTCPClientMgr::Run()
{
	m_pCommandCommunicator->Run();
}

void HTCPClientMgr::Shutdown()
{
	if (false == m_bCreated)
		return;

	if (NULL != m_pTCPClient)
		m_pTCPClient->Destroy();
	if (true == m_bCreated)
		pthread_join(m_nThreadID, NULL);
}

bool HTCPClientMgr::IsConnected()
{
	if (NULL == m_pTCPClient)
		return false;

	return m_pTCPClient->IsConnected();
}

bool HTCPClientMgr::IsRun()
{
	if (NULL == m_pTCPClient)
		return false;

	return m_pTCPClient->IsRun();
}

void* ClientWorker(void* args)
{
	HTCPClient* pClient = (HTCPClient*)args;
	pClient->Run();
	//pClient = NULL;

	return NULL;
}



