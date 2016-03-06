
#ifndef __HSERVER_H__
#define __HSERVER_H__

#include "HNetLib.h"


class HSocket;


class HNET_API HServer
{
protected :
	string 		m_strIP;
	int			m_nPort;
	int 		m_nListenSize;

	HSocket* 	m_pServerSocekt;

	bool		m_bKeepAlive;
	int			m_nKeepAliveIdle;
	int			m_nKeepAliveCount;
	int			m_nKeepAliveInterval;


public :
			HServer();	
	virtual ~HServer();

	virtual bool 		CreateNetwork(const char* szIP, int nPort, int nSize) = 0;
	virtual void		Run() = 0;

			int 		GetFD();
			bool 		MakeNonBlockSocket();
		
			void		SetKeepAlive(bool bEnable);
			void		SetKeepAliveConfig(int nIdle, int nCnt, int nInterval);
			bool		SetKeepAliveSocket(int nFD);
			bool		IsSetKeepAlive();
};

#endif



