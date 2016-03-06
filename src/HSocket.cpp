
#include "HSocket.h"

HSocket::HSocket()
{
	m_nFD = -1;
	m_nPort = -1;

	m_nType = E_SOCKET_NORMAL;

	memset(&m_stAddr, 0, sizeof(m_stAddr));
}

HSocket::HSocket(const int nFD)
{
	m_nFD = nFD;
	m_nPort = -1;

	memset(&m_stAddr, 0, sizeof(m_stAddr));
}

HSocket::HSocket(const int nFD, const char* szIP, const int nPort)
{
	m_nFD = nFD;
	m_strIP = szIP;
	m_nPort = nPort;

	memset(&m_stAddr, 0, sizeof(m_stAddr));
}

HSocket::~HSocket()
{
	if (m_nFD > 0)
		close(m_nFD);
	
}

void HSocket::SetFD(const int nFD)
{
	m_nFD = nFD;
}

void HSocket::SetAddr(const char* szIP, const int nPort)
{
	m_strIP = szIP;
	m_nPort = nPort;
}

void HSocket::SetAddr(struct sockaddr_in& rAddr)
{
	memset(&m_stAddr, 0, sizeof(m_stAddr));
	memcpy(&m_stAddr, &rAddr, sizeof(rAddr));
}


void HSocket::SetIP(const char* szIP)
{
	m_strIP = szIP;
}

void HSocket::SetPort(const int nPort)
{
	m_nPort = nPort;
}

int HSocket::GetType()
{
	return m_nType;
}

int HSocket::GetFD()
{
	return m_nFD;
}

const char* HSocket::GetIP()
{
	return m_strIP.c_str();
}

int HSocket::GetPort()
{
	return m_nPort;
}


sockaddr_in* HSocket::GetSockAddr()
{
	return &m_stAddr;
}

int HSocket::GetAddrSize()
{
	return sizeof(m_stAddr);
}

bool HSocket::Recreate()
{
	return false;
}

void HSocket::Shutdown()
{
	if (m_nFD < 0)
		return;
	
	shutdown(m_nFD, SHUT_RDWR);
}

void HSocket::Close()
{
	if (m_nFD < 0)
		return;

	close(m_nFD);

	m_nFD = -1;
}

bool HSocket::MakeNonBlockSocket()
{
	int nFlags, nRet;
	nFlags = fcntl (m_nFD, F_GETFL, 0);
	if (nFlags == -1)
		return false;

	nFlags |= O_NONBLOCK;
	nRet = fcntl (m_nFD, F_SETFL, nFlags);
	if (nRet == -1)
		return false;

	return true;
}
