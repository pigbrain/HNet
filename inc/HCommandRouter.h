
#ifndef __HCOMMANDROUTER_H__
#define __HCOMMANDROUTER_H__

#include "HNetLib.h"
#include "HPacket.h"


class HLink;
class HCommand;
class HMutex;

struct TD_ROUTE_INFO
{
	int		nLength;
	int		nOffset;
	char*	pBuffer;
};

class HCommandRouter
{
public :
	HCommandRouter(HLink* pOwner);
	virtual ~HCommandRouter();
	
	bool	Route(char* pBuffer, int nLength, int nOffset = 0);
	bool	LazyRoute(char* pBuffer, int nLength, int nOffset = 0);
	bool	HaveWritableData();
	
	list<TD_ROUTE_INFO>*	GetRouteQueue();
	list<TD_ROUTE_INFO>*	GetLazyRouteQueue();

	void	ClearRecvBuffer();
	void	SetRecvBufferFull(bool bFull);
	bool	IsRecvBufferFull();

private :
	HLink*					m_pOwner;
	//HMutex*					m_pLock;
	bool					m_bRecvBufferFull;

	list<TD_ROUTE_INFO>		m_listRoute;
	list<TD_ROUTE_INFO>		m_listLazyRoute;
	list<TD_ROUTE_INFO>		m_listCommand;
	

};

#endif

