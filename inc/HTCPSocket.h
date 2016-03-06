
#ifndef __HTCPSOCKET_H__
#define __HTCPSOCKET_H__

class HSocket;

class HNET_API HTCPSocket : public HSocket
{

public :
	HTCPSocket();
	virtual ~HTCPSocket();

	virtual bool	Create();
	virtual bool	Recreate();
};

#endif


