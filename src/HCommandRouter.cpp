

#include "HLink.h"
#include "HCommand.h"
#include "HCommandDesc.h"
#include "HCommandCommunicator.h"
#include "HCommandRouter.h"
#include "HMutex.h"


HCommandRouter::HCommandRouter(HLink* pOwner)
{
	m_pOwner = pOwner;
	//m_pLock = new HMutex();
	m_bRecvBufferFull = false;
}

HCommandRouter::~HCommandRouter()
{
	list<TD_ROUTE_INFO>::iterator it;
	for (it = m_listRoute.begin(); it != m_listRoute.end(); it++)
	{
		SAFE_DELETE_ARRAY((*it).pBuffer);
	}
	for (it = m_listLazyRoute.begin(); it != m_listLazyRoute.end(); it++)
	{
		SAFE_DELETE_ARRAY((*it).pBuffer);
	}
	for (it = m_listCommand.begin(); it != m_listCommand.end(); it++)
	{
		SAFE_DELETE_ARRAY((*it).pBuffer);
	}

	m_listRoute.clear();
	m_listLazyRoute.clear();
	m_listCommand.clear();

	//SAFE_DELETE(m_pLock);
}

	
bool HCommandRouter::Route(char* pBuffer, int nLength, int nOffset)
{
	//CS_GUARD(m_pLock)
	m_pOwner->Lock();

	TD_ROUTE_INFO _info;
	memset(&_info, 0, sizeof(TD_ROUTE_INFO));
	_info.pBuffer = pBuffer;
	_info.nLength = nLength;
	_info.nOffset = nOffset;

	m_listRoute.push_back(_info);

	m_pOwner->Unlock();
}

bool HCommandRouter::LazyRoute(char* pBuffer, int nLength, int nOffset)
{
	//CS_GUARD(m_pLock)
	m_pOwner->Lock();

	TD_ROUTE_INFO _info;
	memset(&_info, 0, sizeof(TD_ROUTE_INFO));
	_info.pBuffer = pBuffer;
	_info.nLength = nLength;
	_info.nOffset = nOffset;

	m_listLazyRoute.push_back(_info);

	m_pOwner->Unlock();
}

bool HCommandRouter::HaveWritableData()
{
	return (!m_listLazyRoute.empty() || !m_listRoute.empty());
}
	
list<TD_ROUTE_INFO>* HCommandRouter::GetRouteQueue()
{
	//CS_GUARD(m_pLock)
	m_pOwner->Lock();

	if (true == m_listRoute.empty())
	{
		m_pOwner->Unlock();
		return NULL;
	}
	
	m_listCommand = m_listRoute;
	m_listRoute.clear();
	m_pOwner->Unlock();

	return &m_listCommand;
}

list<TD_ROUTE_INFO>* HCommandRouter::GetLazyRouteQueue()
{
	//CS_GUARD(m_pLock)
	m_pOwner->Lock();

	if (true == m_listLazyRoute.empty())
	{
		m_pOwner->Unlock();
		return NULL;
	}

	m_listCommand = m_listLazyRoute;
	m_listLazyRoute.clear();

	m_pOwner->Unlock();

	return &m_listCommand;	
}

void HCommandRouter::ClearRecvBuffer()
{
	m_bRecvBufferFull = false;
}

void HCommandRouter::SetRecvBufferFull(bool bFull)
{
	m_bRecvBufferFull = bFull;
}

bool HCommandRouter::IsRecvBufferFull()
{
	return m_bRecvBufferFull;
}



