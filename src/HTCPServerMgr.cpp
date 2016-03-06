

#include "HSocket.h"
#include "HLink.h"
#include "HLinkMap.h"
#include "HServer.h"
#include "HTCPSocket.h"
#include "HTCPServer.h"
#include "HIOMgr.h"
#include "HTCPIOMgr.h"
#include "HEpoll.h"
#include "HServerMgr.h"
#include "HCommandCommunicator.h"
#include "HTCPServerMgr.h"
#include "CommandTable_HNET.h"
#include "HNetLog.h"

void* IOWorker(void* args);


HTCPServerMgr::HTCPServerMgr()
{
	m_pTCPServer = NULL;
	m_pEpoll = NULL;
	m_pCommandCommunicator = NULL;
	m_bCreated = false;
	m_nWorkerCnt = 0;
	m_nPipeIndex = 0;
}

HTCPServerMgr::~HTCPServerMgr()
{
	Shutdown();

	SAFE_DELETE(m_pTCPServer);
	SAFE_DELETE(m_pCommandCommunicator);
	SAFE_DELETE(m_pEpoll);

	for (map<pthread_t, HIOMgr*>::iterator it = m_mapIOMgr.begin(); it != m_mapIOMgr.end(); it++)
		SAFE_DELETE((*it).second);

	for (int i = 0; i < m_nWorkerCnt; i++)
	{
		delete[] m_pPipe[i];
	}
	delete[] m_pPipe;
}

bool HTCPServerMgr::CreateNetwork(const char* szIP, int nPort,  int nSocketPool, int nWorker)
{
	if (true == m_bCreated)
		return false;

	if (NULL == szIP)
		return false;

	if (nPort <= 0)
		return false;

	if (nSocketPool <= 0)
		nSocketPool = SOCKET_POOL_SIZE;

	if (nWorker <= 0)
		nWorker = WORKER_SIZE;

	CommandTable_HNET::AddCommandTable();

	m_pTCPServer = new HTCPServer();
	if (false == m_pTCPServer->CreateNetwork(szIP, nPort, LISTEN_SIZE))
		return false;
/*
	if (false == m_pTCPServer->MakeNonBlockSocket())
		return false;
*/
	m_pCommandCommunicator = new HCommandCommunicator();

	m_pEpoll = new HEpoll(0, 0, LISTEN_SIZE);
	if (false == m_pEpoll->Create())
		return false;
	
	
	m_nWorkerCnt = nWorker;
	m_pPipe = new int*[nWorker];
	for (int i = 0; i < nWorker; i++)
	{
		m_pPipe[i] = new int[2];
		memset(m_pPipe[i], 0, sizeof(int) * 2);

		pipe(m_pPipe[i]);
	}

	nSocketPool = nSocketPool + (nWorker - (nSocketPool % nWorker));
	
	for (int i = 0; i < nWorker; i++) 
	{
		int nMinID = i * (nSocketPool / nWorker);
		int nMaxID = (i + 1) * (nSocketPool / nWorker) - 1;

		pthread_t nThreadID = 0;
		HTCPIOMgr* pIOMgr = new HTCPIOMgr(m_pPipe[i][0], nMinID, nMaxID, m_pCommandCommunicator); 		
		if (false == pIOMgr->Init())
			return false;

		int nRet = pthread_create(&nThreadID, NULL, IOWorker, (void*)pIOMgr);
		if (0 != nRet)
			return false;

		m_mapIOMgr.insert(pair<pthread_t, HIOMgr*>(nThreadID, pIOMgr));
	}

	m_pEpoll->AddEvent(m_pTCPServer->GetFD(), E_EV_IN);
	
	m_bCreated = true;

	return true;
}

bool HTCPServerMgr::SetKeepAlive(bool bEnable)
{
	if (NULL == m_pTCPServer)
		return false;
	
	m_pTCPServer->SetKeepAlive(bEnable);

	return true;
}

bool HTCPServerMgr::SetKeepAliveConfig(int nIdle, int nCnt, int nInterval)
{
	if (NULL == m_pTCPServer)
		return false;
	
	m_pTCPServer->SetKeepAliveConfig(nIdle, nCnt, nInterval);

	return true;
}

void HTCPServerMgr::Run()
{
	if (false == m_bCreated)
		return;
	
	int nEvCount = m_pEpoll->Run();
	for (int i = 0; i < nEvCount; i++)
	{
		if (m_pEpoll->GetFD(i) == m_pTCPServer->GetFD())
		{
			HConnector cConnector;
			if (false == m_pTCPServer->CreateConnector(cConnector))
				continue;
			
			AddConnector(cConnector.GetFD(), cConnector);

			m_pEpoll->AddEvent(cConnector.GetFD(), E_EV_IN);
		}
		else 
		{
			HConnector cConnector = GetConnector(m_pEpoll->GetFD(i));

			int nFD = GetPipeFD();
			write(nFD, (char*)&cConnector, sizeof(HConnector));
			
			DeleteConnector(m_pEpoll->GetFD(i));

			m_pEpoll->DelEvent(m_pEpoll->GetFD(i));

			continue;
		}
	}

	m_pCommandCommunicator->Run();
}

void HTCPServerMgr::Shutdown()
{
	for (map<pthread_t, HIOMgr*>::iterator it = m_mapIOMgr.begin(); it != m_mapIOMgr.end(); it++) 
	{
		(*it).second->Destroy();
		pthread_join((*it).first, NULL);
		SAFE_DELETE((*it).second);
	}

	m_mapIOMgr.clear();
}

int HTCPServerMgr::GetCommandCount()
{
	return m_pCommandCommunicator->GetCommandCount();
}

int	HTCPServerMgr::GetPipeFD()
{
	if (m_nPipeIndex >= m_nWorkerCnt)
		m_nPipeIndex = 0;
	return m_pPipe[m_nPipeIndex++][1];
}

void HTCPServerMgr::AddConnector(int nFD, HConnector& oConnector)
{
	m_mapConnector.insert(unordered_map<int, HConnector>::value_type(nFD, oConnector));
}

void HTCPServerMgr::DeleteConnector(int nFD)
{
	m_mapConnector.erase(nFD);
}

HConnector HTCPServerMgr::GetConnector(int nFD)
{
	unordered_map<int, HConnector>::const_iterator it =  m_mapConnector.find(nFD);
	
	return it->second;
}

void* IOWorker(void* args)
{
	HIOMgr* pMgr = (HIOMgr*)args;
	pMgr->Run();
	pMgr = NULL;

	return NULL;
}

