



#ifndef __HCONNECTOR_H__
#define __HCONNECTOR_H__

#include "HNetLib.h"


class HNET_API HConnector
{
private :
	int				m_nFD;
	char			m_szHost[NI_MAXHOST];
	char			m_szPort[NI_MAXSERV];
	struct 			sockaddr_in m_stAddr;
	unsigned long	m_ulConnectTime;

public :
	HConnector();
	HConnector(int nFD, char* szHost, char* szPort, struct sockaddr_in* pAddr);

	void		SetFD(int nFD);
	void		SetAddress(char* szHost, char* szPort);
	void		SetAddress(struct sockaddr_in* pAddr);
	
	int				GetFD();
	char*			GetIP();
	int				GetPort();
	sockaddr_in*	GetSockAddr();

	unsigned long	GetConnectTime();
};

#endif

