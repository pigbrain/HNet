

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>

using namespace std;

static char* IP = NULL;
static char* PORT = NULL;
static int   THREAD_ID = 0;
static int	 SEND_COUNT = 1;

struct HPacketHeader
{
	char	nMsg;
	char	szSize[10];
};

struct HCommandMsg : public HPacketHeader
{
	char	szCommandID[10];
	char	szMessage[1000];
};



void* TestWorker(void* args)
{
	int nID = THREAD_ID++;
	int sock;
	int str_len, i;
	struct sockaddr_in serv_addr;

	sock = socket(PF_INET, SOCK_STREAM, 0);
	if (sock == -1)
	{
		cout << "socket create error " << endl;
		return NULL;
	}

	memset(&serv_addr, 0, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = inet_addr(IP);
	serv_addr.sin_port = htons(atoi(PORT));

	if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
	{
		cout << "socket connect error " << endl;
		return NULL;
	}

#define HC_ECHO_REQ			1001
#define HC_ECHO				1002
#define MESSAGE				"Hello, World!"	

	HCommandMsg Message;
	memset(&Message, 0, sizeof(Message));
	Message.nMsg = 0x0A;
	sprintf(Message.szCommandID, "%d", HC_ECHO_REQ);
	strcpy(Message.szMessage, MESSAGE);
	sprintf(Message.szSize, "%d",  sizeof(Message.szCommandID) + 1000); 

	i = 0;
	int nCnt = 0;

	while (1)
	{
		int nByte = write(sock, &Message , sizeof(struct HPacketHeader) + sizeof(Message.szCommandID) + 1000);
		
		cout << "ID : " << nID << ", Write : " << nByte << "         -" << SEND_COUNT++ << endl;
	/*
		char temp[1021] = {0, };
		int nRead = read(sock, temp, sizeof(temp));
		cout << "ID : " << nID << ", Read : " << nRead << endl;
	
		if (nRead <= 0)
			break;
	*/
		sleep(10);
	}

}

int main(int argc, char** argv)
{
	
	if (argc != 3)
	{
		cout << " ip port " << endl;
		return -1;
	}

	IP = argv[1];
	PORT = argv[2];

	pthread_t nThreadID = 0;
	for (int i = 0; i < 1 ; i++)
	{
		int nRet = pthread_create(&nThreadID, NULL, TestWorker, NULL);
		if (0 != nRet)
			return false;

		usleep(10);
	}
	pthread_join(nThreadID, NULL);

	sleep(1);


	return 0;

}
