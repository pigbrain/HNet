
#include "HServer.h"
#include "HTCPServer.h"
#include "HSocket.h"
#include "HConnector.h"
#include "HTCPSocket.h"
#include "HNetLog.h"

HTCPServer::HTCPServer()
{
	m_nPort = -1;
	m_nListenSize = -1;
}

HTCPServer::~HTCPServer()
{
}

bool HTCPServer::CreateNetwork(const char* szIP, int nPort, int nSize)
{
	if (nSize < 0)
		nSize = LISTEN_SIZE;

	m_pServerSocekt = new HTCPSocket();
	m_pServerSocekt->SetAddr(szIP, nPort);
	if (false == m_pServerSocekt->Create())
		return false;

	int nOption = 1;
	socklen_t nOptLen = sizeof(nOption);
	
	setsockopt(m_pServerSocekt->GetFD(), SOL_SOCKET, SO_REUSEADDR, &nOption, nOptLen);
	
	int nRet = -1;
	nRet = ::bind(m_pServerSocekt->GetFD(), (struct sockaddr *)m_pServerSocekt->GetSockAddr(), sizeof(struct sockaddr_in));
	if (nRet < 0)
		return false;
	
	nRet = ::listen(m_pServerSocekt->GetFD(), nSize);
	if (nRet < 0)
		return false;

	return true;
}

bool HTCPServer::CreateConnector(HConnector& rConnector) 
{
	char szHost[NI_MAXHOST] = {0, };
	char szPort[NI_MAXSERV] = {0, };

	struct 	sockaddr_in stAddr;
	memset(&stAddr, 0, sizeof(struct sockaddr_in));

	int nSize = sizeof(stAddr);
	int nFD = accept(m_pServerSocekt->GetFD(), 
						(struct sockaddr*)&stAddr, 
						(socklen_t *)&nSize);
	if (nFD < 0)
	{
		HNET_LOG(HNET_LOG_FATAL, "accept Error error:%s errorno:%d ", strerror(errno), errno);
		return false;
	}

	rConnector.SetFD(nFD);
	int nRet = getnameinfo ((struct sockaddr*)&stAddr, nSize, 
							szHost, sizeof(szHost),
							szPort, sizeof(szPort),
							NI_NUMERICHOST | NI_NUMERICSERV);
	if (0 == nRet)
	{
		rConnector.SetAddress(szHost, szPort);
		rConnector.SetAddress(&stAddr);
	}

	HNET_LOG(HNET_LOG_DEBUG, "accept socket:%d host:%s, port:%s", nFD, szHost, szPort);

	return true;
}

void HTCPServer::Run()
{
	
}

