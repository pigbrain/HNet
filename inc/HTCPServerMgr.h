

#ifndef __HTCPSERVERMGR_H__
#define __HTCPSERVERMGR_H__

#include "HNetLib.h"
#include "HConnector.h"

class HSocket;
class HTCPSocket;
class HServer;
class HTCPServer;
class HIOMgr;
class HTCPIOMgr;
class HEpoll;
class HLink;
class HLinkMap;
class HServerMgr;
class HCommandCommunicator;

class HNET_API HTCPServerMgr : public HServerMgr
{
private :
	HTCPServer*					m_pTCPServer;
	HCommandCommunicator*		m_pCommandCommunicator;

	HEpoll*						m_pEpoll;
	map<pthread_t, HIOMgr*>		m_mapIOMgr;
	int**						m_pPipe;
	int							m_nPipeIndex;
	int							m_nWorkerCnt;
	bool						m_bCreated;
	

	unordered_map<int, HConnector> m_mapConnector;

	
public :
	HTCPServerMgr();
	~HTCPServerMgr();

	virtual bool			CreateNetwork(const char* szIP, int nPort, int nSocketPool = SOCKET_POOL_SIZE, int nWorker = WORKER_SIZE);
			
			bool			SetKeepAlive(bool bEnable);
			bool			SetKeepAliveConfig(int nIdle, int nCnt, int nInterval);

	virtual void			Run();
	virtual void			Shutdown();

	HCommandCommunicator*	GetCommunicator()	{	return m_pCommandCommunicator;	}
			
			int				GetCommandCount();
private :
	int						GetPipeFD();
	void					AddConnector(int nFD, HConnector& oConnector);
	void					DeleteConnector(int nFD);
	HConnector				GetConnector(int nFD);
};

#endif

