
#ifndef __HSOCKET_H__
#define __HSOCKET_H__

#include "HNetLib.h"

enum SOCKET_TYPE
{
	E_SOCKET_NORMAL = 0,
	E_SOCKET_TCP    = 1,
	E_SOCKET_UDP    = 2,
	E_SOCKET_SSL    = 3,
	E_SOCKET_MAX
};

class HNET_API HSocket
{
protected :
		
	int 	m_nFD;
	string 	m_strIP;
	int 	m_nPort;

	struct 	sockaddr_in m_stAddr;
	
	int		m_nType;


public :

			HSocket();
			HSocket(const int nFD);
			HSocket(const int nFD, const char* szIP, const int nPort);
	virtual ~HSocket();

	void 			SetFD(const int nFD);
	void 			SetAddr(const char* szIP, const int nPort);
	void			SetAddr(struct sockaddr_in& rAddr);
	void			SetIP(const char* szIP);
	void 			SetPort(const int nPort);

	int				GetType();
	int				GetFD();
	const char*		GetIP();
	int				GetPort();

	sockaddr_in*	GetSockAddr();
	int				GetAddrSize();

	virtual bool	Create() = 0;
	virtual bool	Recreate();

	void			Shutdown();
	void			Close();

	
	bool 			MakeNonBlockSocket();
};

#endif


