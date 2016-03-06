

#ifndef __HCOMMANDDESC_H__
#define __HCOMMANDDESC_H__

#include "HNetLib.h"

class HCommand;
	
class HNET_API HCommandParameterDesc {
protected:
	HCommandParameterType			m_nType;
	int								m_nSize;
	char							m_szDescription[64];
public:
									HCommandParameterDesc(HCommandParameterType nType, int nSize, const char* szDescription);
	virtual							~HCommandParameterDesc(void);
	HCommandParameterType			GetType(void)		{ return m_nType; }
	const int						GetSize(void)		{ return m_nSize; }
	const char*						GetDescription(void){ return m_szDescription; }
};


typedef HCommandResult (HCommandHandlerFunc) (HCommand* pCommand);

class HNET_API HCommandDesc 
{
protected:
	int								m_nID;					///< Command ID
	char							m_szName[256];			///< Name for Parsing
	char							m_szDescription[256];	///< Description of Command
	unsigned int					m_nFlag;				///< Command Description Flag
	HCommandFlow					m_nFlow;				///< Flow

	vector<HCommandParameterDesc*>	m_ParamDescs;			///< Parameters
	
public:
	HCommandHandlerFunc*			m_pFunc;		///< 커맨드 핸들러 함수 포인터
	
public:
	/// @param nID				커맨드 ID
	/// @param nFlag			커맨드 플래그, MCDT_NOTINITIALIZED
	/// @param szName			커맨드 이름
	/// @param szDescription	커맨드 설명
	
	HCommandDesc(int nID, int nFlag, HCommandFlow nFlow, const char* szName, const char* szDescription);
	virtual ~HCommandDesc(void);

	void 			AddParamDesc(HCommandParameterDesc* pParamDesc);
	void			AddHandler(HCommandHandlerFunc* pFunc);

	bool 			IsFlag(int nFlag) const;
	int 			GetID(void) const 			{ return m_nID; }
	const char* 	GetName(void) const 		{ return m_szName; }
	const char* 	GetDescription(void) const 	{ return m_szDescription; }
	HCommandFlow 	GetFlow() const 			{ return m_nFlow; }
	
	HCommandParameterDesc* GetParameterDesc(size_t i) const 
	{
		if(i < 0 || i >= m_ParamDescs.size()) return NULL;
		return m_ParamDescs[i];
	}
	
	int GetParameterDescCount(void) const 
	{
		return m_ParamDescs.size();
	}

	int GetParameterDescSize(size_t i) const 
	{
		if(i < 0 || i >= m_ParamDescs.size()) return -1;
		return m_ParamDescs[i]->GetSize();
	}
	
	HCommandParameterType GetParameterType(size_t i) const
	{
		if ( i < 0 || i >= m_ParamDescs.size()) return HPT_END;
		return m_ParamDescs[i]->GetType();
	}
};


///< Command Description Map
class HNET_API HCommandDescMap
{
private:
	typedef map<int, HCommandDesc*>			HDescMap;
	HDescMap								m_DescMap;
	HCommandDescMap();
public:

	~HCommandDescMap();

	static	HCommandDescMap*	GetInstance();

			void				Clear();

			int					GetCount(void) const		{ return (int)m_DescMap.size(); }
			HCommandDesc*		GetCommandDesc(int i);
			HCommandDesc*		GetCommandDescByID(int nID);
			HCommandDesc*		GetCommandDescByName(const char* chName);
			void				AddCommandDesc(HCommandDesc* pCD);
			void				AddCommandHandler(int nID, HCommandHandlerFunc* pFunc);
};

inline HCommandDescMap* HGetCommandDescMap()
{
	return HCommandDescMap::GetInstance();
}

#define BEGIN_CMD_DESC()				{ HCommandDesc* pCD4m; 
#define END_CMD_DESC()					}
#define C(_a, _b, _c, _d)				{ pCD4m = new HCommandDesc(_a, _b, _c, #_a, _d); HGetCommandDescMap()->AddCommandDesc(pCD4m); }
#define P(_a, _b, _c)					{ pCD4m->AddParamDesc(new HCommandParameterDesc(_a, _b, _c)); }


#define DECL_CMD_HANDLER(_func)			static HCommandResult _func(HCommand* pCommand);
#define SET_CMD_HANDLER(_a, _func)		HGetCommandDescMap()->AddCommandHandler(_a, _func);


#endif

