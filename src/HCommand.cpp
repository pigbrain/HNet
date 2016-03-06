
#include "HPacket.h"
#include "HCommand.h"
#include "HCommandDesc.h"
#include "HCommandParameter.h"
#include "HNetLog.h"

HCommand::HCommand()
{
	m_nCommandID = -1;
	m_vecParams.clear();
}

HCommand::~HCommand()
{
	vector<HCommandParameter*>::iterator it;
	for (it = m_vecParams.begin(); it != m_vecParams.end(); it++)
	{
		SAFE_DELETE(*it);
	}

	m_vecParams.clear();
}

int HCommand::BuildCommand(char* pData, unsigned int nDataLen)
{
	HNET_LOG(HNET_LOG_DEBUG, "Build Command. Length:%d", nDataLen, nDataLen);
	HNET_HEX_DUMP(HNET_LOG_DEBUG, pData, nDataLen);

	if (NULL == pData)
		return -1;
	
	int nOffset = 0;
	char* pBuffer = pData;

	HPacketHeader* pHeader = (HPacketHeader*)pData;
	if (NULL == pHeader->szSize)
		return -2;

	int nCommandLength = atoi(pHeader->szSize);
	if (nCommandLength < 0)
		return -3;

	int nRemainLength = nCommandLength;

	HCommandMsg* pCommand = (HCommandMsg*)(pData + sizeof(HPacketHeader));
	nOffset += sizeof(HPacketHeader);

	if (NULL == pCommand->szCommandID)
		return -4;

	pBuffer = pBuffer + sizeof(HPacketHeader);
	pBuffer = pBuffer + sizeof(pCommand->szCommandID);
	nOffset += sizeof(pCommand->szCommandID);
	nRemainLength -= sizeof(pCommand->szCommandID);

	m_nCommandID = atoi(pCommand->szCommandID);
	m_pCommandDesc = HGetCommandDescMap()->GetCommandDescByID(m_nCommandID);
	if (NULL == m_pCommandDesc)
		return -5;

	int nParamCnt = m_pCommandDesc->GetParameterDescCount();
	for (int i = 0; i < nParamCnt; i++)
	{
		HCommandParameterDesc* pParamDesc = m_pCommandDesc->GetParameterDesc(i);
		if (NULL == pParamDesc)
			return false;

		if (nRemainLength <= 0)
			break;

		switch (pParamDesc->GetType())
		{
		case HPT_CHAR :
			{
				m_vecParams.push_back(new HCommandParameterChar(pBuffer, pParamDesc->GetSize()));
				pBuffer = pBuffer + pParamDesc->GetSize();
				nOffset += pParamDesc->GetSize();
				nRemainLength -= pParamDesc->GetSize();
			}

			break;

		case HPT_VCHAR :
			{
				char szSize[PACKET_VARIABLE_PARAM_SIZE + 1] = {0, };
				memcpy(szSize, pBuffer, PACKET_VARIABLE_PARAM_SIZE);
				pBuffer += PACKET_VARIABLE_PARAM_SIZE;
				nOffset += PACKET_VARIABLE_PARAM_SIZE;
				nRemainLength -= PACKET_VARIABLE_PARAM_SIZE;

				int nSize = atoi(szSize);
				m_vecParams.push_back(new HCommandParameterVChar(pBuffer, nSize));
				
				pBuffer += nSize;
				nOffset += nSize;
				nRemainLength -= nSize;;
			}
			break;

		case HPT_ZCHAR :
			{
				int nSize = nRemainLength;
				m_vecParams.push_back(new HCommandParameterZChar(pBuffer, nSize));	
				
				pBuffer += nSize;
				nOffset += nSize;
				nRemainLength -= nSize;	
			}
			break;
		
		case HPT_BLOB :
			break;

		}
	}
	
	return (nDataLen - nOffset);
}

bool HCommand::CreateCommand(int nCommandID, int nCount, ...)
{
	m_nCommandID = nCommandID;
	m_pCommandDesc = HGetCommandDescMap()->GetCommandDescByID(m_nCommandID);
	if (NULL == m_pCommandDesc)
		return false;
	
	int nParameterCount = m_pCommandDesc->GetParameterDescCount();
	if (nParameterCount != nCount)
		return false;
	
	va_list argList;
	HCommandParameter* pCommandParameter = NULL;
	va_start(argList, nCount);
	for (int i = 0; i < nCount; i++) 
	{
		pCommandParameter = va_arg(argList, HCommandParameter*);
		m_vecParams.push_back(pCommandParameter);
	}

	va_end(argList);
	
	return true;
}

char* HCommand::BuildRawPacket()
{
	if (NULL == m_pCommandDesc)
		return NULL;
	
	int nSize = PACKET_COMMANDID_PARAM_SIZE; 
	for (int i = 0; i < m_pCommandDesc->GetParameterDescCount(); i++)
	{
		HCommandParameterDesc* pParamDesc = m_pCommandDesc->GetParameterDesc(i);
		if (NULL == pParamDesc)
			return NULL;

		//nSize += pParamDesc->GetSize();

		switch (pParamDesc->GetType())
		{
		case HPT_CHAR :
			nSize += pParamDesc->GetSize();
			break;

		case HPT_VCHAR :
			nSize += PACKET_VARIABLE_PARAM_SIZE;
			nSize += m_vecParams[i]->GetSize();
			break;
		case HPT_ZCHAR :
			nSize += m_vecParams[i]->GetSize();
			break;
		}
	}
	
	if (nSize > MAX_PACKET_SIZE)
		return NULL;
	
	char* pRawPacket = new char[sizeof(HPacketHeader) + nSize + 1];
	memset(pRawPacket, 0, sizeof(HPacketHeader) + nSize + 1);
	
	HPacketHeader* pHeader = (HPacketHeader*)pRawPacket;
	pHeader->nMsg = MSG_COMMAND;
	sprintf(pHeader->szSize, "%d", nSize);
	
	char* pBuffer = (pRawPacket + sizeof(HPacketHeader));
	char szCommandID[PACKET_COMMANDID_PARAM_SIZE] = {0, };
	sprintf(szCommandID, "%d", m_nCommandID);
	
	memcpy(pBuffer, szCommandID, PACKET_COMMANDID_PARAM_SIZE);
	pBuffer += PACKET_COMMANDID_PARAM_SIZE;

	for (int i = 0; i < m_vecParams.size(); i++) 
	{
		HCommandParameter* pCommandParameter = m_vecParams[i];
		switch (pCommandParameter->GetType())
		{
		case HPT_CHAR :
			{
				memcpy(pBuffer, pCommandParameter->GetPointer(), pCommandParameter->GetSize());
				pBuffer += m_pCommandDesc->GetParameterDescSize(i);
			}
			break;

		case HPT_VCHAR :
			{
				char szSize[PACKET_VARIABLE_PARAM_SIZE + 1] = {0, };
				sprintf(szSize, "%d", pCommandParameter->GetSize());

				memcpy(pBuffer, szSize, PACKET_VARIABLE_PARAM_SIZE);
				pBuffer += PACKET_VARIABLE_PARAM_SIZE;

				memcpy(pBuffer, pCommandParameter->GetPointer(), pCommandParameter->GetSize());
				pBuffer += pCommandParameter->GetSize();
			}
			break;
		case HPT_ZCHAR :
			{
				memcpy(pBuffer, pCommandParameter->GetPointer(), pCommandParameter->GetSize());
				pBuffer += pCommandParameter->GetSize();	
			}
			break;
		}
	}


	return pRawPacket;
}
	

int HCommand::GetParameterCount()
{
	return m_vecParams.size();
}


HCommandParameter* HCommand::GetParameter(int nIndex) 
{
	if (nIndex >= m_vecParams.size())
		return NULL;

	return m_vecParams[nIndex];
}



