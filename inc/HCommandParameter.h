

#ifndef __HCOMMANDPARAMETER_H__
#define __HCOMMANDPARAMETER_H__

#include "HNetLib.h"

class HNET_API HCommandParameter {
protected:
	HCommandParameterType		m_nType;
public:
								HCommandParameter(HCommandParameterType nType){ m_nType = nType; }
	virtual						~HCommandParameter(void){}

	HCommandParameterType		GetType(void)	{ return m_nType; }
	
	/// 같은 파라미티 타입으로 복제
	virtual HCommandParameter*	Clone(void) = 0;
	/// 메모리 블럭으로 저장
	virtual int					GetData(char* pData, const int nSize) = 0;
	/// 메모리 블럭으로 지정
	virtual int					SetData(const char* pData, const int nSize) = 0;
	/// 첫 포인터 얻기
	virtual void*				GetPointer(void) = 0;
	/// 타입 이름 얻기
	virtual const char*			GetClassName(void) = 0;
	/// 사이즈 얻기
	virtual int					GetSize() = 0;
/*
	virtual int					GetBlobCount()				{ _ASSERT(!"MCommandParameterBlob 전용."); return -1; }
	virtual int					GetBlobSize()				{ _ASSERT(!"MCommandParameterBlob 전용."); return -1; }
	virtual void*				GetBlobElement(int i)		{ _ASSERT(!"MCommandParameterBlob 전용."); return NULL; }
	virtual int					GetSingleBlobValueSize()	{ _ASSERT(!"MCommandParameterSingleBlob 전용."); return -1; }
*/
};


class HNET_API HCommandParameterChar : public HCommandParameter
{
public:
	char*		m_pValue;
	int			m_nSize;
public:
								HCommandParameterChar(void);
								HCommandParameterChar(const char* pValue, int nSize);
	virtual						~HCommandParameterChar();
	virtual HCommandParameter*	Clone(void);
	virtual int					GetData(char* pData, const int nSize);
	virtual int					SetData(const char* pData, const int nSize);
	virtual void*				GetPointer()		 { return m_pValue; }
	virtual const char*			GetClassName(void)	 { return "Char"; }
	virtual int					GetSize()			 { return m_nSize; }
};

class HNET_API HCommandParameterVChar : public HCommandParameter
{
public:
	char*		m_pValue;
	int			m_nSize;
public:
								HCommandParameterVChar(void);
								HCommandParameterVChar(const char* pValue, int nSize);
	virtual						~HCommandParameterVChar();
	virtual HCommandParameter*	Clone(void);
	virtual int					GetData(char* pData, const int nSize);
	virtual int					SetData(const char* pData, const int nSize);
	virtual void*				GetPointer()		 { return m_pValue; }
	virtual const char*			GetClassName(void)	 { return "VChar"; }
	virtual int					GetSize()			 { return m_nSize; }
};

class HNET_API HCommandParameterZChar : public HCommandParameter
{
	public:
		char*       m_pValue;
		int         m_nSize;
	public:
		HCommandParameterZChar(void);
		HCommandParameterZChar(const char* pValue, int nSize);
		virtual                     ~HCommandParameterZChar();
		virtual HCommandParameter*  Clone(void);
		virtual int                 GetData(char* pData, const int nSize);
		virtual int                 SetData(const char* pData, const int nSize);
		virtual void*               GetPointer()         { return m_pValue; }
		virtual const char*         GetClassName(void)   { return "ZChar"; }
		virtual int                 GetSize()            { return m_nSize; }
};


#endif
