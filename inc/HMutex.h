
#ifndef __HMUTEX_H__
#define __HMUTEX_H__

#include "HNetLib.h"

class HNET_API HMutex
{

public :
	HMutex();
	virtual ~HMutex();

	void Lock();
	void UnLock();
	bool IsLocked();

	void Wait();
	void Wait(int nSec, int nMs);
	void Notify();
	void NotifyAll();

protected :

	pthread_mutex_t			m_Lock;
	pthread_mutexattr_t		m_Attr;
	pthread_cond_t			m_Cond;
};

class CriticalGuard
{
public :
    CriticalGuard(HMutex* pMutex);
    ~CriticalGuard();

private :
    HMutex* m_pMutex;
};

#ifndef CS_GUARD
#define CS_GUARD(x) \
        CriticalGuard cs(x);
#endif



#endif


