
#ifndef __HTCPCLIENT_H__
#define __HTCPCLIENT_H__

#include "HNetLib.h"
#include "HLink.h"

class HClient;
class HTCPSocket;
class HEpoll;
class HCommandCommunicator;

class HNET_API HTCPClient : public HClient
{

public :
	HTCPClient(int nID, const char* szIP, int nPort, HCommandCommunicator* pCommandCommunicator);
	virtual ~HTCPClient();
	
	virtual bool		CreateNetwork();
	virtual bool 		Connect();
	virtual void		Run();
			void		Destroy();
	
			bool		IsConnected()		{	return m_bConnected;	}
			bool		IsRun()				{	return !m_bDestroy;		}

protected :
	virtual	void		Do();

private :
	int						m_nID;
	int						m_nFD;
	HLinkPtr				m_LinkPtr;
	HEpoll*					m_pEpoll;
	HCommandCommunicator*	m_pCommandCommunicator;

	bool					m_bConnected;
	bool					m_bDestroy;

private :
	
	void	PostConnectLink();
	void	PostDisconnectLink();

	void	Disconnect();
	bool	Read();
	bool	Write();

};

#endif


