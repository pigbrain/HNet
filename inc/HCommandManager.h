
#ifndef __HCOMMANDMANAGER_H__
#define __HCOMMANDMANAGER_H__

#include "HNetLib.h"

class HCommand;			// 만들어야대
class HMutex;


class HNET_API HCommandManager
{
	typedef list<HCommand*>			HCommandList;

private :
	HMutex*			m_pMutex;
	HCommandList	m_CommandQueue;
	int				m_nMaxQueueSize;

public :
	HCommandManager();
	virtual ~HCommandManager();

	void		Clear();
	bool		Post(HCommand* pCommand);
	HCommand*	GetCommand();

	void		SetMaxQueueSize(int nSize)	{	m_nMaxQueueSize = nSize;	}
	int			GetMaxQueueSize()			{	return m_nMaxQueueSize;		}
	int			GetCommandQueueCount(void);

};

#endif

