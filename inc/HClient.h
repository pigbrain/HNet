

#ifndef __HCLIENT_H__
#define __HCLIENT_H__

#include "HNetLib.h"

class HSocket;


class HNET_API HClient
{
protected :
	int			m_nID;
	string 		m_strIP;
	int			m_nPort;
	HSocket* 	m_pClientSocket;


public :
			HClient(int nID, const char* szIP, int nPort);	
	virtual ~HClient();

	
	virtual bool		CreateNetwork() = 0;
	virtual bool 		Connect() = 0;
	virtual void		Run() = 0;

			int			GetID();
			int 		GetFD();
			bool 		MakeNonBlockSocket();

protected :
	virtual void		Do() = 0;
};



#endif

