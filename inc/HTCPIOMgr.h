

#ifndef __HTCPIOMGR_H__
#define __HTCPIOMGR_H__

#include "HNetLib.h"

class HConnector;
class HEpoll;
class HCommandCommunicator;
class HLink;
class HLinkMap;
class HIOMgr;
class HLinkPtr;

class HNET_API HTCPIOMgr : public HIOMgr
{
private :
	HCommandCommunicator*	m_pCommandCommunicator;
	HLinkMap*				m_pLinkMap;
	int*					m_pIDQueue;
	int						m_nQueueSize;
	int						m_nHead;
	int						m_nTail;

public :
	HTCPIOMgr(int nFD,int nMinID, int nMaxID, HCommandCommunicator* pCommandCommunicator);
	virtual ~HTCPIOMgr();

	virtual bool Init();
	virtual void Destroy();

private :
	virtual void	Do();
			void	Disconnect(HLinkPtr& rLinkPtr, const char* szErr);

			HLink*	CreateLink(int nID, HConnector& rConnector);
			void	PostConnectLink(int nID, int nFD, HLinkPtr& rLinkPtr);
			void	PostDisconnectLink(int nID, int nFD, HLinkPtr& rLinkPtr);

			int		GetID();
			void	ReturnID(int nID);
			bool	Read(HLinkPtr& rLinkPtr);
			bool	Write(HLinkPtr& rLinkPtr);
			
			//void	Disconnect();
};

#endif

