
#include "HClientMgr.h"
#include "HTCPClientMgr.h"
#include "HCommandDesc.h"
#include "HCommandCommunicator.h"
#include "HCommand.h"
#include "HCommandParameter.h"
#include "CommandTable_HNET.h"
#include "HLink.h"

#define HC_ECHO_REQ         1001
#define HC_ECHO_RES         1002


void AddCommandTable()
{
	BEGIN_CMD_DESC()

		C(HC_ECHO_REQ, HCDT_MACHINE2MACHINE, HCF_C2S, "Echo Request")
			P(HPT_CHAR,		1000,	"Message1")
			P(HPT_VCHAR, 	-1, 	"Message2")
			P(HPT_ZCHAR,    -1,     "Message3")

		C(HC_ECHO_RES, HCDT_MACHINE2MACHINE, HCF_S2C, "Echo Response")
			P(HPT_CHAR, 	1000, 	"Message1")
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
	

	HCommand* pNewCommand = new HCommand();
	if (false == pNewCommand->CreateCommand(
					HC_ECHO_REQ, 3, 
					new HCommandParameterChar("TTTAABB", strlen("TTTAABB")),
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

HCommandResult CommandHandlerDisconnectLink(HCommand* pCommand)
{
	HCommandParameterChar* pParam1 = (HCommandParameterChar*)pCommand->GetParameter(0);
	HCommandParameterChar* pParam2 = (HCommandParameterChar*)pCommand->GetParameter(1);

	cout << "Delete Link" << endl;
	cout << "param1 : " << (char*)(pParam1->GetPointer()) << endl;
	cout << "param2 : " << (char*)(pParam2->GetPointer()) << endl;

	return CR_TRUE;
}

HCommandResult CommandHandlerEchoRes(HCommand* pCommand)
{
	HCommandParameterChar* pParam1 = (HCommandParameterChar*)pCommand->GetParameter(0);
	HCommandParameterChar* pParam2 = (HCommandParameterChar*)pCommand->GetParameter(1);
	HCommandParameterChar* pParam3 = (HCommandParameterChar*)pCommand->GetParameter(2);
	
	cout << "param1 : " << (char*)(pParam1->GetPointer()) << endl;
	cout << "param2 : " << (char*)(pParam2->GetPointer()) << endl;
	cout << "param3 : " << (char*)(pParam3->GetPointer()) << endl;
	
//	return CR_TRUE;
	HCommand* pNewCommand = new HCommand();
	if (false == pNewCommand->CreateCommand(
				HC_ECHO_REQ, 3,
				new HCommandParameterChar("TTTAABB", strlen("TTTAABB")),
				new HCommandParameterVChar("TTTAACC", strlen("TTTAACC")),
				new HCommandParameterZChar("TTTAABBCC123123123", strlen("TTTAABBCC123123123"))))
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

	SET_CMD_HANDLER(HC_ECHO_RES, CommandHandlerEchoRes)
}

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		cout << " ip port " << endl;
		return -1;
	}
	

	HTCPClientMgr* pMgr = new HTCPClientMgr();
	if (false == pMgr->CreateNetwork(10000, argv[1], atoi(argv[2]) ))
	{
		cerr << "start fail" << endl;
		SAFE_DELETE(pMgr);
		return 0;
	}
	
	AddCommandTable();
	SetCommandHandler();

	int nCnt = 0;
	while (true)
	{
		nCnt++;
		if (nCnt > 10)
			break;
		usleep(100);
		pMgr->Run();
	}

	SAFE_DELETE(pMgr);


	return 0;
}

