
#ifndef __HPACKET_H__
#define __HPACKET_H__


#define MAX_PACKET_SIZE					131072


#define PACKET_HEADER_SIZE				11
#define PACKET_LENGTH_PARAM_SIZE		10
#define PACKET_COMMANDID_PARAM_SIZE		10

#define PACKET_VARIABLE_PARAM_SIZE		10


#define MSG_COMMAND						0x0A
#define MSGID_RAWCOMMAND				0x1A		// ��ȣȭ �ȵ� Ŀ�ǵ�
#define MSGID_COMMAND					0x29		// ��ȣȭ�� Ŀ�ǵ�
	
struct HPacketHeader
{
	char	nMsg;
	//unsigned short	nCheckSum;		// üũ��. ������ 4bit�� �ø��� ��ȣ üũ
	char	szSize[10];
};

struct HCommandMsg
{
	char	szCommandID[10];
	char	szBuffer[1];
};




#endif


