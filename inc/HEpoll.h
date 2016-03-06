


#ifndef __HEPOLL_H__
#define __HEPOLL_H__

#include "HNetLib.h"

enum EPOLL_EVENT_TYPE
{
	E_EV_IN		= EPOLLIN,
	E_EV_OUT	= EPOLLOUT,
	E_EV_ET		= EPOLLET,
	E_EV_ERR	= EPOLLERR,
	E_EV_HUP	= EPOLLHUP,
	E_EV_PRI	= EPOLLPRI
};

#define EPOLL_SIZE	20

class HNET_API HEpoll
{
private :
	int		m_nFD;
	int		m_nEvSize;
	
	struct epoll_event	m_stEvent;
	struct epoll_event* m_pEvent;

	int		m_nDispatchTime;
	bool	m_bCreated;
	
public :
	HEpoll(int nSec, int nMicroSec, int nSize = EPOLL_SIZE);
	virtual ~HEpoll();

	virtual bool	Create();
	virtual bool	AddEvent(int nFD, int nOP);
	virtual bool	ModEvent(int nFD, int nOP);
	virtual bool	DelEvent(int nFD);
	virtual int		Run();
			int		GetFD(int nIndex);
			int		GetEvent(int nIndex);

			bool	IsActive_IN(int nIndex);
			bool	IsActive_OUT(int nIndex);

};

#endif


