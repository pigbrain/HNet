
#include "HSocket.h"
#include "HTCPSocket.h"
#include "HServer.h"
#include "HEpoll.h"
#include "HLink.h"
#include "HLinkMap.h"
#include "HConnector.h"
#include "HIOMgr.h"


HIOMgr::HIOMgr()
{
	m_nFD = -1;
	m_pEpoll = NULL;
	m_bInit = false;
	m_bDestroy = false;
}


HIOMgr::HIOMgr(int nFD)
{
	m_nFD = nFD;
	m_pEpoll = NULL;
	m_bInit = false;
	m_bDestroy = false;
}

HIOMgr::~HIOMgr()
{
	Destroy();
	SAFE_DELETE(m_pEpoll);
}

void HIOMgr::Run()
{
	while (false == m_bDestroy)
	{
		Do();
	}	
}

void HIOMgr::Destroy()
{
	m_bDestroy = true;
}


