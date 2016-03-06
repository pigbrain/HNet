
#include "HCommand.h"
#include "HCommandDesc.h"
#include "HCommandManager.h"
#include "HCommandCommunicator.h"

#include "HLink.h"

HCommandCommunicator::HCommandCommunicator(void)
{
	m_pCommandManager = new HCommandManager();
	m_nCrowdState = HCS_COMFORTABLE;
}

HCommandCommunicator::~HCommandCommunicator(void)
{
	if (NULL != m_pCommandManager)
		m_pCommandManager->Clear();

	SAFE_DELETE(m_pCommandManager);
}

void HCommandCommunicator::Clear()
{
	if (NULL != m_pCommandManager)
		m_pCommandManager->Clear();
}

void HCommandCommunicator::SetComfortable()
{
	m_nCrowdState = HCS_COMFORTABLE;
}

void HCommandCommunicator::SetCrowded()
{
	m_nCrowdState = HCS_CROWDED;
}

void HCommandCommunicator::SetOverfull()
{
	m_nCrowdState = HCS_OVERFULL;
}

bool HCommandCommunicator::IsComfortable()
{
	return (HCS_COMFORTABLE == m_nCrowdState ? true : false);
}

bool HCommandCommunicator::IsOverfull()
{
	return (HCS_OVERFULL == m_nCrowdState ? true : false);
}

bool HCommandCommunicator::IsCrowded()
{
	return (HCS_CROWDED == m_nCrowdState ? true : false);
}

int	HCommandCommunicator::GetCommandCount()
{
	return m_pCommandManager->GetCommandQueueCount();
}

bool HCommandCommunicator::Post(HCommand* pCommand)
{	
	return m_pCommandManager->Post(pCommand);
}

void HCommandCommunicator::Run(void)
{
	if (NULL == m_pCommandManager)
		return;
	
	while (true)
	{
		HCommand* pCommand = m_pCommandManager->GetCommand();
		if (NULL == pCommand)
			break;

		if (NULL == pCommand->m_pCommandDesc)
		{
			SAFE_DELETE(pCommand);
			continue;
		}
/*
		if (NULL == pCommand->m_pSenderLink)
		{
			SAFE_DELETE(pCommand);
			continue;
		}
*/		
		if (NULL == pCommand->m_pCommandDesc->m_pFunc)
		{
			SAFE_DELETE(pCommand);
			continue;
		}

		if (CR_TRUE != pCommand->m_pCommandDesc->m_pFunc(pCommand))
		{	
			pCommand->m_LinkPtr->Disconnect();
		}
		SAFE_DELETE(pCommand);
	}
}

