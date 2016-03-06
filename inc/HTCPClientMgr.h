

#ifndef __HTCPCLIENTMGR_H__
#define __HTCPCLIENTMGR_H__

#include "HNetLib.h"

class HSocket;
class HTCPSocket;
class HClient;
class HTCPClient;
class HCommandCommunicator;
class HLink;
class HClientMgr;

class HNET_API HTCPClientMgr : public HClientMgr
{
private :
	HTCPClient*					m_pTCPClient;
	HCommandCommunicator*		m_pCommandCommunicator;
	pthread_t					m_nThreadID;
	bool						m_bCreated;

	
	
public :
	HTCPClientMgr();
	~HTCPClientMgr();

	virtual bool			CreateNetwork(int nID, const char* szIP, int nPort);
	virtual void			Run();
	virtual void			Shutdown();
	
			bool			IsConnected();
			bool			IsRun();


	HCommandCommunicator*	GetCommunicator()	{	return m_pCommandCommunicator;	}

};

#endif

