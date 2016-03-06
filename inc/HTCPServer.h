
#ifndef __HTCPSERVER_H__
#define __HTCPSERVER_H__

class HConnector;
class HServer;
class HTCPSocket;


class HNET_API HTCPServer : public HServer
{

public :
	HTCPServer();
	virtual ~HTCPServer();

	virtual bool 		CreateNetwork(const char* szIP, int nPort, int nSize = LISTEN_SIZE);
	virtual bool		CreateConnector(HConnector& rConnector);
	virtual void		Run();
	
};


#endif


