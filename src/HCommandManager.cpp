
#include "HMutex.h"
#include "HCommand.h"
#include "HCommandDesc.h"
#include "HCommandManager.h"

HCommandManager::HCommandManager()
{
	m_nMaxQueueSize = COMMAND_QUEUE_MAX_SIZE;
	m_pMutex = new HMutex();
}

HCommandManager::~HCommandManager()
{
	Clear();
	SAFE_DELETE(m_pMutex);
}

void HCommandManager::Clear()
{
	CS_GUARD(m_pMutex);
	for(HCommandList::iterator it = m_CommandQueue.begin(); it != m_CommandQueue.end(); it++)
	{
		SAFE_DELETE(*it);
	}
	m_CommandQueue.clear();
}

bool HCommandManager::Post(HCommand* pCommand)
{
	CS_GUARD(m_pMutex);

	if (m_CommandQueue.size() >= m_nMaxQueueSize && pCommand->m_pCommandDesc )
	{
		if (!pCommand->m_pCommandDesc->IsFlag(HCDT_LOCAL) && 
			pCommand->m_pCommandDesc->GetFlow() == HCF_C2S)
		{
			return false;
		}

		return false;
	}
		
	m_CommandQueue.push_back(pCommand);

	return true;
}

HCommand* HCommandManager::GetCommand()
{
	CS_GUARD(m_pMutex);
	if(m_CommandQueue.empty())
	{
		return NULL;
	}

	HCommand* pCmd = *m_CommandQueue.begin();
	m_CommandQueue.erase(m_CommandQueue.begin());

	return pCmd;
}



int HCommandManager::GetCommandQueueCount(void)
{
	//CS_GUARD(m_pMutex);
	return m_CommandQueue.size();
}

