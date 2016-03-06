
#include "HCommand.h"
#include "HCommandDesc.h"


HCommandParameterDesc::HCommandParameterDesc(HCommandParameterType nType, int nSize, const char* szDescription)
{
	m_nType = nType;
	m_nSize = nSize;

	memset(m_szDescription, 0, sizeof(m_szDescription));

	int nLength = strlen(szDescription) >= sizeof(m_szDescription) ? sizeof(m_szDescription) -1 : strlen(szDescription);
	if (NULL != szDescription)
		strncpy(m_szDescription, szDescription, nLength);
}


HCommandParameterDesc::~HCommandParameterDesc(void)
{
}



HCommandDesc::HCommandDesc(int nID, int nFlag, HCommandFlow nFlow, const char* szName, const char* szDescription)
{
	m_nID = nID;
	int nSize = 0;
	

	memset(m_szName, 0, sizeof(m_szName));
	memset(m_szDescription, 0, sizeof(m_szDescription));

	nSize = strlen(szName) >= sizeof(m_szName) ? sizeof(m_szName) -1 : strlen(szName);
	if (NULL != szName)
		strncpy(m_szName, szName, nSize);
	
	nSize = strlen(szDescription) >= sizeof(m_szDescription) ? sizeof(m_szDescription) -1 : strlen(szDescription);
	if (NULL != szDescription)
		strncpy(m_szDescription, szDescription, nSize);
	
	m_nFlag = nFlag;
	m_nFlow = nFlow;
	m_pFunc = NULL;
}

HCommandDesc::~HCommandDesc(void)
{
	for(int i=0; i<(int)m_ParamDescs.size(); i++)
	{
		SAFE_DELETE(m_ParamDescs[i]);
	}
	m_ParamDescs.clear();
}

void HCommandDesc::AddParamDesc(HCommandParameterDesc* pParamDesc)
{
	m_ParamDescs.push_back(pParamDesc);
}

void HCommandDesc::AddHandler(HCommandHandlerFunc* pFunc)
{
	m_pFunc = pFunc;
}

bool HCommandDesc::IsFlag(int nFlag) const
{
	return ((m_nFlag & nFlag) == nFlag);
}




HCommandDescMap::HCommandDescMap()
{

}

HCommandDescMap::~HCommandDescMap()
{
	Clear();
}

HCommandDescMap* HCommandDescMap::GetInstance()
{
	static HCommandDescMap stCommandDescMap;
	return &stCommandDescMap;
}

void HCommandDescMap::Clear()
{
	for(HDescMap::iterator i = m_DescMap.begin(); i != m_DescMap.end(); i++)
	{
		HCommandDesc* pCommandDesc = (*i).second;
		SAFE_DELETE(pCommandDesc);
	}
	m_DescMap.clear();
}

HCommandDesc* HCommandDescMap::GetCommandDesc(int i)
{
	if(i<0 || i>=(int)m_DescMap.size()) return NULL;

	HDescMap::iterator itor = m_DescMap.begin();

	for (int t=0; t < i; t++)
	{
		itor++;
		if (itor == m_DescMap.end()) return NULL;
	}

	return (*itor).second;
}

HCommandDesc* HCommandDescMap::GetCommandDescByID(int nID)
{
	HDescMap::iterator itor = m_DescMap.find(nID);
	if (itor != m_DescMap.end())
	{
		return (*itor).second;
	}
	
	return NULL;
}

HCommandDesc* HCommandDescMap::GetCommandDescByName( const char* chName )
{
	HDescMap::iterator itor = m_DescMap.begin();

	while(itor != m_DescMap.end())
	{
		if(strcmp((*itor).second->GetName(), chName) == 0)
		{
			return (*itor).second;
		}

		itor++;
	}

	return NULL;
}

void HCommandDescMap::AddCommandDesc(HCommandDesc* pCD)
{
	m_DescMap.insert(HDescMap::value_type(pCD->GetID(), pCD));
}

void HCommandDescMap::AddCommandHandler(int nID, HCommandHandlerFunc* pFunc)
{
	HDescMap::iterator itor = m_DescMap.find(nID);
	if (itor == m_DescMap.end())
		return;

	(*itor).second->AddHandler(pFunc);
}

