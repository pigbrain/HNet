
#ifndef __HNETCOMMANDTABLE_H__
#define __HNETCOMMANDTABLE_H__


#include "HNetLib.h"



#define HC_CONNECT_LINK					10
#define HC_DISCONNECT_LINK				11

class HNET_API CommandTable_HNET 
{
public :
	CommandTable_HNET() {}
	static void AddCommandTable();
};

#endif


