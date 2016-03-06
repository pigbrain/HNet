
#ifndef __HCOMMANDSTREAM_H__
#define __HCOMMANDSTREAM_H__

#include "HNetLib.h"
#include "HPacket.h"

class HLink;
class HCommand;


class HNET_API HCommandStream
{
public :
	HCommandStream(HLink* pOwner);
	virtual ~HCommandStream();
	
	bool		Read(char* pBuffer, int nBufferLen);
	HCommand*	GetCommand();
	
private :
	
	bool		EstimateBufferToCmd();
	int			MakeCommand(char* pBuffer, int nBufferLen);
	void		ClearBuffer();

	bool		IsBufferEmpty();
	bool		ReadBuffer(char* pBuffer, int nBufferLen);
	void		AddBuffer(char* pBuffer, int nLen);
	int			StoreBuffer(char* pBuffer, int nLen);


private :
	HLink*			m_pOwner;
	char 			m_szBuffer[MAX_PACKET_SIZE];
	int				m_nBufferNext;
	list<HCommand*>	m_CommandQueue;
};

#endif







/*















class MCommandStream 
{
private:
MCommandManager*		m_pCommandManager;

char					m_Buffer[MAX_PACKET_SIZE];
int						m_nBufferNext;

MCommandList			m_CommandList;

MPacketCrypter*			m_pPacketCrypter;			// ...
MCommandBuilder			m_CommandBuilder;
private:
bool					IsBufferEmpty();
bool					EstimateBufferToCmd();
void					AddBuffer(char* pBuffer, int nLen);
int						JustAddBuffer(char* pBuffer, int nLen);
int						MakeCommand(char* pBuffer, int nBufferLen);
bool					ReadBuffer( char* pBuffer, int nBufferLen );
void					Clear();

public:
MCommandStream(MCommandManager* pCmdMgr);
~MCommandStream();
bool					Read(char* pBuffer, int nBufferLen);

MCommand*				GetCommand();

void					InitCrypt(MPacketCrypter* pPacketCrypter, bool bCheckCommandSerialNumber);
};

*/
