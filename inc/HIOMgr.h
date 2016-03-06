

#ifndef __HIOMGR_H__
#define __HIOMGR_H__

#include "HNetLib.h"

class HConnector;
class HEpoll;
class HLink;
class HLinkMap;
class HIOMgr;

class HNET_API HIOMgr
{
protected :
	HEpoll*			m_pEpoll;
	bool			m_bInit;
	bool			m_bDestroy;
	int				m_nFD;
	
public :
	HIOMgr();
	HIOMgr(int nFD);
	virtual ~HIOMgr();

	virtual bool Init() = 0;
	virtual void Destroy();
			void Run();

private :
	virtual void Do() = 0;
};

#endif

