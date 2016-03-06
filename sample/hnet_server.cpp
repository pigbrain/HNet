
#include "HServerMgr.h"
#include "HTCPServerMgr.h"
#include "HCommandDesc.h"
#include "HCommandCommunicator.h"
#include "HCommand.h"
#include "HCommandParameter.h"
#include "CommandTable_HNET.h"
#include "HLink.h"
#include "HNetLog.h"

#define HC_ECHO_REQ			1001
#define HC_ECHO				1002

void AddCommandTable()
{
	BEGIN_CMD_DESC()

		C(HC_ECHO_REQ, HCDT_MACHINE2MACHINE, HCF_C2S, "Echo Request")
			P(HPT_CHAR,		1000,	"Message1")
			P(HPT_VCHAR, 	-1, 	"Message2")
			P(HPT_ZCHAR, 	-1, 	"Message3")

		C(HC_ECHO, HCDT_MACHINE2MACHINE, HCF_S2C, "Echo Response")
			P(HPT_CHAR,		1000, 	"Message1")
			P(HPT_VCHAR, 	-1, 	"Message2")
			P(HPT_ZCHAR,    -1,     "Message3")

	END_CMD_DESC()
}

HCommandResult CommandHandlerConnectLink(HCommand* pCommand)
{
	HCommandParameterChar* pParam1 = (HCommandParameterChar*)pCommand->GetParameter(0);
	HCommandParameterChar* pParam2 = (HCommandParameterChar*)pCommand->GetParameter(1);

	cout << "Create Link" << endl;
	cout << "param1 : " << (char*)(pParam1->GetPointer()) << endl;
	cout << "param2 : " << (char*)(pParam2->GetPointer()) << endl;

	return CR_TRUE;
}

HCommandResult CommandHandlerDisconnectLink(HCommand* pCommand)
{
	HCommandParameterChar* pParam1 = (HCommandParameterChar*)pCommand->GetParameter(0);
	HCommandParameterChar* pParam2 = (HCommandParameterChar*)pCommand->GetParameter(1);

	cout << "Delete Link" << endl;
	cout << "param1 : " << (char*)(pParam1->GetPointer()) << endl;
	cout << "param2 : " << (char*)(pParam2->GetPointer()) << endl;

	return CR_TRUE;
}

static int nCount = 0;
HCommandResult CommandHandlerEcho(HCommand* pCommand)
{
	HCommandParameterChar* pParam1 = (HCommandParameterChar*)pCommand->GetParameter(0);
	HCommandParameterChar* pParam2 = (HCommandParameterChar*)pCommand->GetParameter(1);
	HCommandParameterChar* pParam3 = (HCommandParameterChar*)pCommand->GetParameter(2);

	cout << nCount++ << " Received " << endl;
	cout << "param1 : " << (char*)(pParam1->GetPointer()) << endl;
	cout << "param2 : " << (char*)(pParam2->GetPointer()) << endl;
	cout << "param3 : " << (char*)(pParam3->GetPointer()) << endl;
	cout << "param3 size : " << pParam3->GetSize() << endl;

	//pCommand->m_SendLinkPtr->Disconnect();
	
	HCommand* pNewCommand = new HCommand();
	if (false == pNewCommand->CreateCommand(
					HC_ECHO, 3, 
					new HCommandParameterChar("TTTAABB", 1000),
					new HCommandParameterVChar("TTTAACC", strlen("TTTAACC")),
					new HCommandParameterZChar("TTTAABBCC", strlen("TTTAABBCC"))))  
	{
		cout << "Command Create Error" << endl;
		SAFE_DELETE(pNewCommand);
		return CR_TRUE;
	}

	if (false == pCommand->m_LinkPtr->Route(pNewCommand))
	{
		cout << "Command post fail " << endl;
		SAFE_DELETE(pNewCommand);
	}
	
	return CR_TRUE;
}

void SetCommandHandler()
{
	SET_CMD_HANDLER(HC_CONNECT_LINK, CommandHandlerConnectLink)
	SET_CMD_HANDLER(HC_DISCONNECT_LINK, CommandHandlerDisconnectLink)

	SET_CMD_HANDLER(HC_ECHO_REQ, CommandHandlerEcho)
}

int main()
{
	AddCommandTable();

	HTCPServerMgr* pMgr = new HTCPServerMgr();
	if (false == pMgr->CreateNetwork("211.245.106.28", 5010, 1000, 3))
	{
		cerr << "create network fail" << endl;
		SAFE_DELETE(pMgr);
		return 0;
	}
	
	
	SetCommandHandler();
	HNetLogger()->SetHexDump(true);

	int nCnt = 0;
	while (true)
	{
		pMgr->Run();
		usleep(100);
		
		//nCnt++;
	}
	SAFE_DELETE(pMgr);

	return 0;
}
