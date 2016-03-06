

#include "HSocket.h"
#include "HServer.h"

HServer::HServer()
{
	m_pServerSocekt = NULL;
	m_bKeepAlive	= false;

	m_nKeepAliveIdle	= SOCKET_KEEPALIVE_IDLE;
	m_nKeepAliveCount	= SOCKET_KEEPALIVE_IDLE;
	m_nKeepAliveInterval= SOCKET_KEEPALIVE_INTERVAL;

}

HServer::~HServer()
{
	SAFE_DELETE(m_pServerSocekt);
}

int HServer::GetFD()
{
	if (NULL == m_pServerSocekt)
		return -1;

	return m_pServerSocekt->GetFD();
}

bool HServer::MakeNonBlockSocket()
{
	if (NULL == m_pServerSocekt)
		return false;
	
	return m_pServerSocekt->MakeNonBlockSocket();
}


void HServer::SetKeepAlive(bool bEnable)
{
	m_bKeepAlive = bEnable;
}

void HServer::SetKeepAliveConfig(int nIdle, int nCnt, int nInterval)
{
	m_nKeepAliveIdle	= nIdle;
	m_nKeepAliveCount	= nCnt;
	m_nKeepAliveInterval= nInterval;

	m_bKeepAlive = true;
}

bool HServer::SetKeepAliveSocket(int nFD)
{
	if (false == IsSetKeepAlive())
		return true;

	int nKeepAlive = m_bKeepAlive == true ? 1 : 0;

	if (0 > setsockopt(nFD, SOL_SOCKET, SO_KEEPALIVE, &nKeepAlive, sizeof(nKeepAlive)))
		return false;

	if (0 > setsockopt(nFD, SOL_TCP, TCP_KEEPIDLE, &m_nKeepAliveIdle, sizeof(m_nKeepAliveIdle)))
		return false;

	if (0 > setsockopt(nFD, SOL_TCP, TCP_KEEPCNT, &m_nKeepAliveCount, sizeof(m_nKeepAliveCount)))
		return false;

	if (0 > setsockopt(nFD, SOL_TCP, TCP_KEEPINTVL, &m_nKeepAliveInterval, sizeof(m_nKeepAliveInterval)))
		return false;

	return true;
}

bool HServer::IsSetKeepAlive()
{
	return m_bKeepAlive;
}

