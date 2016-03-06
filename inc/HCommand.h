

#ifndef __HCOMMAND_H__
#define __HCOMMAND_H__

#include "HNetLib.h"
#include "HLink.h"

//class HLinkPtr;
class HCommandDesc;
class HCommandParameter;


class HNET_API HCommand
{
public :
	
	int							m_nCommandID;

	HLinkPtr					m_LinkPtr;

	const HCommandDesc*			m_pCommandDesc;
	vector<HCommandParameter*>	m_vecParams;


protected :
	list<int>					m_listReceiver;

public :
	HCommand();
	~HCommand();

	int		GetCommandID()	{	return m_nCommandID;	}

	int		BuildCommand(char* pData, unsigned int nDataLen);
	bool	CreateCommand(int nCommandID, int nCount, ... );
	char*	BuildRawPacket();
	
	int		GetParameterCount();
	
	HCommandParameter* GetParameter(int nIndex);
};


#endif



