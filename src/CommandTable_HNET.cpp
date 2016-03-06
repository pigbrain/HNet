

#include "HCommandDesc.h"
#include "CommandTable_HNET.h"

void CommandTable_HNET::AddCommandTable() 
{
	BEGIN_CMD_DESC()

		C(HC_CONNECT_LINK,		HCDT_MACHINE2MACHINE, HCF_INNER,	"New Link is connected")
			P(HPT_CHAR,	10, "Link ID")
			P(HPT_CHAR,	10, "Link FD")

		C(HC_DISCONNECT_LINK,	HCDT_MACHINE2MACHINE, HCF_INNER,	"Link is disconnected")
			P(HPT_CHAR, 10, "Link ID")
			P(HPT_CHAR,	10, "Link FD")

	END_CMD_DESC()
}





