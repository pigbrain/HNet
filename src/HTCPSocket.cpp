
#include "HSocket.h"
#include "HTCPSocket.h"

HTCPSocket::HTCPSocket()
{
	m_nType = E_SOCKET_TCP;
}

HTCPSocket::~HTCPSocket()
{
}

bool HTCPSocket::Create()
{
	if (m_nFD > 0)
		return false;

	if (m_nPort < 0)
		return false;

	m_nFD = socket(PF_INET, SOCK_STREAM, 0);
	if (m_nFD < 0)
		return false;

	memset(&m_stAddr, 0, sizeof(m_stAddr));
	m_stAddr.sin_family = AF_INET;
	m_stAddr.sin_port   = htons(m_nPort);

	if (true == m_strIP.empty())
		m_stAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	else
		m_stAddr.sin_addr.s_addr = inet_addr(m_strIP.c_str());

	return true;
}

bool HTCPSocket::Recreate()
{
	if (m_nFD > 0)
	{
		close(m_nFD);
		m_nFD = -1;
	}

	return Create();
}
