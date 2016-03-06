

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
	
	/// ���� �Ķ��Ƽ Ÿ������ ����
	virtual HCommandParameter*	Clone(void) = 0;
	/// �޸� ������ ����
	virtual int					GetData(char* pData, const int nSize) = 0;
	/// �޸� ������ ����
	virtual int					SetData(const char* pData, const int nSize) = 0;
	/// ù ������ ���
	virtual void*				GetPointer(void) = 0;
	/// Ÿ�� �̸� ���
	virtual const char*			GetClassName(void) = 0;
	/// ������ ���
	virtual int					GetSize() = 0;
/*
	virtual int					GetBlobCount()				{ _ASSERT(!"MCommandParameterBlob ����."); return -1; }
	virtual int					GetBlobSize()				{ _ASSERT(!"MCommandParameterBlob ����."); return -1; }
	virtual void*				GetBlobElement(int i)		{ _ASSERT(!"MCommandParameterBlob ����."); return NULL; }
	virtual int					GetSingleBlobValueSize()	{ _ASSERT(!"MCommandParameterSingleBlob ����."); return -1; }
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
