

#ifndef __HSERVERMGR_H__
#define __HSERVERMGR_H__

#include "HNetLib.h"


class HNET_API HServerMgr
{
public :
	HServerMgr() {}
	virtual ~HServerMgr() {}

	virtual bool CreateNetwork(const char* szIP, int nPort, int nSize = LISTEN_SIZE, int nWorker = WORKER_SIZE) = 0;
	virtual void Run() = 0;
	virtual void Shutdown() = 0;
};

#endif

