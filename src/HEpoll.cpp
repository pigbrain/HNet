
#include "HEpoll.h"

HEpoll::HEpoll(int nSec, int nMicroSec, int nSize)
{
	if (nSec < 0)
		nSec = EPOLL_DISPATCH_TIME;

	if (nMicroSec < 0)
		nMicroSec = 0;

	if (nSize <=0 )
		nSize = EPOLL_EVENT_SIZE;

	m_nFD = -1;
	m_nEvSize = nSize;
	
	memset(&m_stEvent, 0, sizeof(m_stEvent));
	m_pEvent = NULL;

	m_nDispatchTime = nSec * 1000 + nMicroSec;

	m_bCreated = false;
}

HEpoll::~HEpoll()
{
	if (NULL != m_pEvent)
		delete[] m_pEvent;
}

bool HEpoll::Create()
{
	m_pEvent = new epoll_event[m_nEvSize];
	if ((m_nFD = epoll_create(m_nEvSize)) < 0) 
		return false;

	m_bCreated = true;

	return true;
}

bool HEpoll::AddEvent(int nFD, int nOP)
{
	if (false == m_bCreated)
		return false;

	struct epoll_event	stEvent;
	memset(&stEvent, 0, sizeof(stEvent));

	stEvent.events = nOP;
	stEvent.data.fd = nFD;

	epoll_ctl(m_nFD, EPOLL_CTL_ADD, nFD, &stEvent);

	return true;
}

bool HEpoll::ModEvent(int nFD, int nOP)
{
	if (false == m_bCreated)
		return false;

	struct epoll_event	stEvent;
	memset(&stEvent, 0, sizeof(stEvent));
	
	stEvent.events = nOP;
	stEvent.data.fd = nFD;

	epoll_ctl(m_nFD, EPOLL_CTL_MOD, nFD, &stEvent);

	return true;
}

bool HEpoll::DelEvent(int nFD)
{
	if (false == m_bCreated)
		return false;

	epoll_ctl(m_nFD, EPOLL_CTL_DEL, nFD, m_pEvent);

	return true;
}

int HEpoll::Run()
{
	if (false == m_bCreated)
		return -9;

	return epoll_wait(m_nFD, m_pEvent, m_nEvSize, m_nDispatchTime);
}

int	HEpoll::GetFD(int nIndex)
{
	if (false == m_bCreated)
		return -1;

	return m_pEvent[nIndex].data.fd;
}

int	HEpoll::GetEvent(int nIndex)
{
	if (false == m_bCreated)
		return -1;

	return m_pEvent[nIndex].events;
}

bool HEpoll::IsActive_IN(int nIndex)
{
	if (false == m_bCreated)
		return false;

	 if (m_pEvent[nIndex].events & EPOLLIN)
		 return true;

	 return false;
}

bool HEpoll::IsActive_OUT(int nIndex)
{
	if (false == m_bCreated)
		return false;

	if (m_pEvent[nIndex].events & EPOLLOUT)
		return true;

	return false;
}
