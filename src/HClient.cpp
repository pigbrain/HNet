
#include "HSocket.h"
#include "HClient.h"

HClient::HClient(int nID, const char* szIP, int nPort)
{
	m_nID = nID;
	m_strIP = szIP;
	m_nPort = nPort;
	m_pClientSocket = NULL;
}

HClient::~HClient()
{
	//SAFE_DELETE(m_pClientSocket);
}

int	HClient::GetID()
{
	return m_nID;
}

int HClient::GetFD()
{
	if (NULL == m_pClientSocket)
		return -1;

	return m_pClientSocket->GetFD();
}

bool HClient::MakeNonBlockSocket()
{
	if (NULL == m_pClientSocket)
		return false;
	
	return m_pClientSocket->MakeNonBlockSocket();
}
