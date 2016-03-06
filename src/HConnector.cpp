
#include "HConnector.h"


HConnector::HConnector() 
{	
	m_nFD = 0;
	memset(m_szHost, 0, NI_MAXHOST);
	memset(m_szPort, 0, NI_MAXSERV);
	memset(&m_stAddr, 0, sizeof(m_stAddr));

	m_ulConnectTime = 0;
}

HConnector::HConnector(int nFD, char* szHost, char* szPort, struct sockaddr_in* pAddr) 
{
	m_nFD = nFD;
	memcpy(m_szHost, szHost, strlen(szHost));
	memcpy(m_szPort, szPort, strlen(szPort));
	memcpy(&m_stAddr, pAddr,	sizeof(struct sockaddr_in));

	m_ulConnectTime = time(NULL);
}

void HConnector::SetFD(int nFD)
{
	m_nFD = nFD;
}

void HConnector::SetAddress(char* szHost, char* szPort)
{
	memset(m_szHost, 0, NI_MAXHOST);
	memset(m_szPort, 0, NI_MAXSERV);
	memcpy(m_szHost, szHost, strlen(szHost));
	memcpy(m_szPort, szPort, strlen(szPort));
}

void HConnector::SetAddress(struct sockaddr_in* pAddr)
{
	memset(&m_stAddr, 0, sizeof(m_stAddr));
	memcpy(&m_stAddr, pAddr, sizeof(struct sockaddr_in));
}

int HConnector::GetFD()
{
	return m_nFD;
}

char* HConnector::GetIP() 
{
	return m_szHost;
}

int HConnector::GetPort() 
{
	return atoi(m_szPort);
}

sockaddr_in* HConnector::GetSockAddr()
{
	return &m_stAddr;
}

unsigned long HConnector::GetConnectTime()
{
	return m_ulConnectTime;
}

