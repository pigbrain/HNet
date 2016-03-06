
#include "HCommandParameter.h"

HCommandParameterChar::HCommandParameterChar(void)
 : HCommandParameter(HPT_CHAR)
{
	m_pValue = NULL;
	m_nSize = 0;
}

HCommandParameterChar::HCommandParameterChar(const char* pValue, int nSize)
 : HCommandParameter(HPT_CHAR)
{
	if (NULL == pValue) 
	{
		m_pValue = NULL;
		nSize = 0;
	}
	else
	{
		if (nSize <= 0)
			nSize = strlen(pValue);
		if (nSize > strlen(pValue))
			nSize = strlen(pValue);

		m_pValue = new char[nSize + 1];
		memset(m_pValue, 0, nSize + 1);
		memcpy(m_pValue, pValue, nSize);

		m_nSize = nSize;
	}
	
}

HCommandParameterChar::~HCommandParameterChar()
{
	SAFE_DELETE_ARRAY(m_pValue);
}

HCommandParameter* HCommandParameterChar::Clone(void)
{
	return (new HCommandParameterChar(m_pValue, m_nSize));
}


int HCommandParameterChar::GetData(char* pData, const int nSize)
{
	if (m_nSize > nSize) return 0;
	if (NULL == m_pValue)
		return 0;

	memcpy(pData, m_pValue, m_nSize);
	return m_nSize;
}

int HCommandParameterChar::SetData(const char* pData, const int nSize)
{
	SAFE_DELETE(m_pValue);

	if (nSize <= 0)
		return -1;

	m_pValue = new char[nSize + 1];
	memset(m_pValue, 0, nSize + 1);
	memcpy(m_pValue, pData, nSize);

	m_nSize = nSize;

	return nSize;
}


HCommandParameterVChar::HCommandParameterVChar(void)
 : HCommandParameter(HPT_VCHAR)
{
	m_pValue = NULL;
	m_nSize = 0;
}

HCommandParameterVChar::HCommandParameterVChar(const char* pValue, int nSize)
 : HCommandParameter(HPT_VCHAR)
{
	if (NULL == pValue) 
	{
		m_pValue = NULL;
		nSize = 0;
	}
	else
	{
		if (nSize <= 0)
			nSize = strlen(pValue);
		if (nSize > strlen(pValue))
			nSize = strlen(pValue);
		
		m_pValue = new char[nSize + 1];
		memset(m_pValue, 0, nSize + 1);
		memcpy(m_pValue, pValue, nSize);

		m_nSize = nSize;
	}
}

HCommandParameterVChar::~HCommandParameterVChar()
{
	SAFE_DELETE_ARRAY(m_pValue);
}

HCommandParameter* HCommandParameterVChar::Clone(void)
{
	return (new HCommandParameterChar(m_pValue, m_nSize));
}

int HCommandParameterVChar::GetData(char* pData, const int nSize)
{
	if (m_nSize > nSize) return 0;
	if (NULL == m_pValue)
		return 0;

	memcpy(pData, m_pValue, m_nSize);
	return m_nSize;
}

int HCommandParameterVChar::SetData(const char* pData, const int nSize)
{
	SAFE_DELETE(m_pValue);

	if (nSize <= 0)
		return -1;

	m_pValue = new char[nSize + 1];
	memset(m_pValue, 0, nSize + 1);
	memcpy(m_pValue, pData, nSize);

	m_nSize = nSize;

	return nSize;
}





HCommandParameterZChar::HCommandParameterZChar(void)
	: HCommandParameter(HPT_ZCHAR)
{
	m_pValue = NULL;
	m_nSize = 0;
}

HCommandParameterZChar::HCommandParameterZChar(const char* pValue, int nSize)
	: HCommandParameter(HPT_ZCHAR)
{
	if (NULL == pValue)
	{
		m_pValue = NULL;
		nSize = 0;
	}
	else
	{
		if (nSize <= 0)
			nSize = strlen(pValue);
		if (nSize > strlen(pValue))
			nSize = strlen(pValue);
		m_pValue = new char[nSize + 2];
		memset(m_pValue, 0, nSize + 2);
		memcpy(m_pValue, pValue, nSize);

		m_nSize = nSize + 1;
	}
}

HCommandParameterZChar::~HCommandParameterZChar()
{
	SAFE_DELETE_ARRAY(m_pValue);
}

HCommandParameter* HCommandParameterZChar::Clone(void)
{
	return (new HCommandParameterZChar(m_pValue, m_nSize - 1));
}

int HCommandParameterZChar::GetData(char* pData, const int nSize)
{
	if (m_nSize > nSize) return 0;
	if (NULL == m_pValue)
		return 0;

	memcpy(pData, m_pValue, m_nSize);
	return m_nSize;
}

int HCommandParameterZChar::SetData(const char* pData, const int nSize)
{
	SAFE_DELETE(m_pValue);

	if (nSize <= 0)
		return -1;

	m_pValue = new char[nSize + 2];
	memset(m_pValue, 0, nSize + 2);
	memcpy(m_pValue, pData, nSize);

	m_nSize = nSize + 1;

	return nSize;
}

