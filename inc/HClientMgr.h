

#ifndef __HCLIENTMGR_H__
#define __HCLIENTMGR_H__

#include "HNetLib.h"

class HNET_API HClientMgr
{
public :
	HClientMgr() {}
	virtual ~HClientMgr() {}

	virtual bool CreateNetwork(int nID, const char* szIP, int nPort) = 0;
	virtual void Run() = 0;
	virtual void Shutdown() = 0;
};

#endif


