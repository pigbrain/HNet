

#ifndef __HCOMMANDCOMMUNICATOR_H__
#define __HCOMMANDCOMMUNICATOR_H__

#include "HNetLib.h"

class HCommand;
class HCommandManager;

class HNET_API HCommandCommunicator
{
protected:
	HCommandManager*			m_pCommandManager;
	HCommandCrowdState			m_nCrowdState;

protected:
	void		Clear();

	void		SetComfortable();
	void		SetCrowded();
	void		SetOverfull();

	bool		IsComfortable();
	bool		IsOverfull();
	bool		IsCrowded();

	
public:
	HCommandCommunicator(void);
	virtual ~HCommandCommunicator(void);

	virtual bool		Post(HCommand* pCommand);
			void		Run(void);

	HCommandManager*	GetCommandManager(void)		{ return m_pCommandManager; }
	int					GetCommandCount();
//	static HCommandCommunicator*	GetInstance();

};

/*
inline HCommandCommunicator* HGetCommandCommunicator()
{
	return HCommandCommunicator::GetInstance();
}
*/

#endif

