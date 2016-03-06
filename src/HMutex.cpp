
#include "HMutex.h"



HMutex::HMutex()
{
	pthread_mutexattr_init( &m_Attr );
	pthread_mutex_init( &m_Lock, &m_Attr );
	pthread_cond_init( &m_Cond, NULL);
}

HMutex::~HMutex()
{
	pthread_cond_destroy( &m_Cond);
	pthread_mutex_destroy( &m_Lock );
	pthread_mutexattr_destroy( &m_Attr );
}

void HMutex::Lock()
{
	pthread_mutex_lock( &m_Lock );
}

void HMutex::UnLock()
{
	pthread_mutex_unlock( &m_Lock );
}

void HMutex::Wait()
{
	Lock();
	pthread_cond_wait(&m_Cond, &m_Lock);
	UnLock();
}

void HMutex::Wait(int nSec, int nMs)
{
	struct timeval  tNow;
	struct timespec tTimeout;
	
	gettimeofday(&tNow, NULL);
	tTimeout.tv_sec = tNow.tv_sec + nSec;
	tTimeout.tv_nsec = tNow.tv_usec + (nMs * 1000);

	Lock();
	pthread_cond_timedwait(&m_Cond, &m_Lock, &tTimeout);
	UnLock();
}

void HMutex::Notify()
{
	pthread_cond_signal(&m_Cond);
}

void HMutex::NotifyAll()
{
	pthread_cond_broadcast(&m_Cond);
}


bool HMutex::IsLocked()
{
	if ( pthread_mutex_trylock( &m_Lock ) != 0 )
		return true;

	return false;
}

CriticalGuard::CriticalGuard(HMutex* pMutex)
{
    m_pMutex = pMutex;
	if (NULL != m_pMutex)
		m_pMutex->Lock();
}

CriticalGuard::~CriticalGuard()
{
	if (NULL != m_pMutex)
		m_pMutex->UnLock();
}


