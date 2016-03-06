
#ifndef __HLINK_H__
#define __HLINK_H__

#include "HNetLib.h"

#include "HAtomicCounter.h"

class HSocket;
class HEpoll;
class HCommand;
class HCommandStream;
class HCommandRouter;
struct TD_ROUTE_INFO;

class HNET_API HLink
{
protected :
	int					m_nID;
	HSocket*			m_pSocket;
	HEpoll*				m_pEpoll;
	HCommandStream*		m_pCommandStream;
	HCommandRouter*		m_pCommandRouter;
	pthread_mutex_t		m_Lock;

	bool				m_bDisconnect;

public :
	HLink(int nID, HSocket* pSocket, HEpoll* pEpoll);
	virtual ~HLink();

	HLink& operator = (const HLink& rLink);
	HLink* operator = (const HLink* rLink);

			int		GetID()	{	return m_nID;	}
	virtual	bool	Disconnect(const char* szReason);
	virtual	bool	IsDisconnected() const	{	return m_bDisconnect;	}
	virtual void	Disconnect();

			void	Lock();
			void	Unlock();

	virtual bool	SendStream();
	virtual bool	Send(list<TD_ROUTE_INFO>* pRouteQueue);
	virtual bool	ReadStream();
			bool	Route(HCommand* pCommand);

			bool	IsValidLink();
			void	OnWritableData();
			void	OffWritableData();

	

	HSocket*		GetSocket()			{	return m_pSocket;						}
	HCommandStream*	GetCommandStream()	{	return m_pCommandStream;				}
	HCommandRouter*	GetCommandRouter()	{	return m_pCommandRouter;				}
	HCommand*		GetCommand();
};

class HNET_API HReferenceCounter
{
private:
    int m_nCount;
	//pthread_spinlock_t m_nSpinLock;

public:
	HReferenceCounter() 
	{	 
		//pthread_spin_init(&m_nSpinLock, 0);
		m_nCount = 0;	
	}
	~HReferenceCounter()
	{
		//pthread_spin_destroy(&m_nSpinLock);
	}
    void Increase() 
	{ 
		//pthread_spin_lock(&m_nSpinLock);
		m_nCount++; 
		//pthread_spin_unlock(&m_nSpinLock);
	}
    void Decrease() 
	{ 
		//pthread_spin_lock(&m_nSpinLock);
		m_nCount--;
		//pthread_spin_unlock(&m_nSpinLock);
	}

	int GetCounter() 
	{
		return m_nCount;
	}

};

class HNET_API HLinkPtr
{
public:
	HLinkPtr() : m_pLink(NULL), m_pRefCounter(NULL)
	{
		//m_pRefCounter = new HReferenceCounter();
		m_pRefCounter = new HAtomicCounter(0);
        m_pRefCounter->Increase();
	}
	HLinkPtr(HLink* pLink) : m_pLink(pLink), m_pRefCounter(NULL)
    {
        m_pRefCounter = new HAtomicCounter(0);
        m_pRefCounter->Increase();
    }
	HLinkPtr(const HLinkPtr& rLink) : m_pLink(rLink.m_pLink), m_pRefCounter(rLink.m_pRefCounter)  
	{  
		m_pRefCounter->Increase();  
	}  
	~HLinkPtr()
    {
        if(m_pRefCounter != NULL)
		{
			//if (NULL != m_pLink) m_pLink->Lock();
			m_pRefCounter->Decrease();
			if (0 == m_pRefCounter->GetCount())
			{
				SAFE_DELETE(m_pLink);
				SAFE_DELETE(m_pRefCounter);
			}
			//if (NULL != m_pLink) m_pLink->Unlock();
		}
    }

	HLinkPtr& operator = (const HLinkPtr& rLink)
    {  
        if (this != &rLink)
        {	
			if (NULL != m_pLink) m_pLink->Lock();
			m_pRefCounter->Decrease();
			if (0 == m_pRefCounter->GetCount())
			{
				SAFE_DELETE(m_pLink);
				SAFE_DELETE(m_pRefCounter);
			}
			if (NULL != m_pLink) m_pLink->Unlock();
				
			m_pLink = rLink.m_pLink;
			m_pRefCounter = rLink.m_pRefCounter;
			m_pRefCounter->Increase();
        }
        
		return *this;
    }

	HLink*	operator->()	{	return m_pLink;						}
    HLink&	operator*()		{	return *m_pLink;					}

	HLink*	GetLink()		{	return m_pLink;						}
	int		GetRefCount()	{	return m_pRefCounter->GetCount();	}

private:
    HLink*				m_pLink;
	//HReferenceCounter*	m_pRefCounter;
	HAtomicCounter*		m_pRefCounter;
};

#endif

