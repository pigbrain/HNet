
#ifndef __HNETLIB_H__

//#include "HCommon.h"


#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include <algorithm>
#include <assert.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <signal.h>
#include <errno.h>
#include <stdarg.h>
#include <ctype.h>
#include <errno.h>
#include <iconv.h>

#include <pthread.h>
#include <ifaddrs.h>
#include <netdb.h>
#include <arpa/inet.h>

#include <sys/un.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/cdefs.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/prctl.h>
#include <sys/socket.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <sys/ioctl.h>

#include <netinet/in.h>
#include <netinet/tcp.h>

#include <tr1/unordered_map>

#define __HNETLIB_H__
#define HNET_API

#define SOCK_BUFSIZE				4096

#define LISTEN_SIZE					500
#define WORKER_SIZE					3

#define EPOLL_DISPATCH_TIME			1
#define EPOLL_EVENT_SIZE			20

#define SOCKET_POOL_SIZE			3000

#define SOCKET_KEEPALIVE_IDLE		5
#define SOCKET_KEEPALIVE_COUNT		2
#define SOCKET_KEEPALIVE_INTERVAL	10

#define COMMAND_QUEUE_MAX_SIZE	500000

enum HCommandParameterType
{
	HPT_CHAR			= 0,
	HPT_VCHAR			= 1,
	HPT_ZCHAR			= 2,
	HPT_INT				= 3,
	HPT_BLOB			= 4,	
	HPT_END
};

enum HCommandFlow
{
	HCF_ANY		= 0,					///< 사용하지 않거나 C<->S
	HCF_C2S		= 1,					///< Client -> Server
	HCF_S2C		= 2,					///< Server -> Client
	HCF_INNER	= 3
};

enum HCommandResult
{
	CR_FALSE		= 0,			///< 처리안됨
	CR_TRUE			= 1,			///< 처리됨
	CR_ERROR		= 2,			///< 에러
};


// Command Description Flag
enum HCDFlags
{
	HCDT_NOTINITIALIZED			= 0x0000,	///< 초기화가 안된 상태

	HCDT_LOCAL					= 0x0001,	///< 로컬로 전달되는 커맨드
	HCDT_MACHINE2MACHINE		= 0x0002,	///< 머신에서 머신으로 전달되는 커맨드
	HMCDT_PEER2PEER				= 0x0004,	///< Peer에서 Peer로 전달되는 커맨드, MACHINE2MACHINE와는 따로 구분한다.
	HCDT_NON_ENCRYPTED			= 0x0008,	///< 암호화하지 않는 커맨드

	HCDT_FILTER_CROWDED			= 0x0010,	///< 섹터 혼잡도 필터옵션 적용
	HCDT_FILTER_IGNORE			= 0x0020,	///< 어떤 경우라도 필터에 적용받지 않는다
	
};

enum HCommandCrowdState					
{
	HCS_COMFORTABLE = 0,
	HCS_CROWDED,
	HCS_OVERFULL
};



using namespace std;
using namespace tr1;

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) \
	if(p) \
	{ delete (p); (p)=NULL; }
#endif

#ifndef SAFE_FREE
#define SAFE_FREE(p) \
	if (p) \
	{ free (p); (p) = NULL; }
#endif

#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(p) \
	if(p) { delete[] (p); (p)=NULL;  } 
#endif

#define __CONSOLE

#endif


