#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/epoll.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netinet/tcp.h>

#define SA  struct sockaddr
#define EPOLL_SIZE		20

#define PORT			5010

int tcpSetKeepAlive(int nSockFd_, int nKeepAlive_, int nKeepAliveIdle_, int nKeepAliveCnt_, int nKeepAliveInterval_)
{
     int nRtn;
     nRtn = setsockopt(nSockFd_, SOL_SOCKET, SO_KEEPALIVE, &nKeepAlive_, sizeof(nKeepAlive_));
     if(nRtn == -1)
    {
         perror("[TCP server]Fail: setsockopt():so_keepalive");
         return -1;
     }
     nRtn = setsockopt(nSockFd_, SOL_TCP, TCP_KEEPIDLE, &nKeepAliveIdle_, sizeof(nKeepAliveIdle_) );
     if(nRtn == -1)
     {
          perror("[TCP server]Fail: setsockopt():so_keepidle");
          return -1;
     }
     nRtn = setsockopt(nSockFd_, SOL_TCP, TCP_KEEPCNT, &nKeepAliveCnt_, sizeof(nKeepAliveCnt_) );
     if(nRtn == -1)
     {
          perror("[TCP server]Fail: setsockopt():so_keepcnt");
          return -1;
      }
     nRtn = setsockopt(nSockFd_, SOL_TCP, TCP_KEEPINTVL, &nKeepAliveInterval_, sizeof(nKeepAliveInterval_) );
     if(nRtn == -1)
     {
          perror("[TCP server]Fail: setsockopt():so_keepintvl");
          return -1;
      }
     return nRtn;
}

int main(int argc, char **argv)
{
	struct sockaddr_in addr, clientaddr;
	struct eph_comm *conn;
	int sfd;
	int cfd;
	int clilen;
	int flags = 1;
	int n, i;
	int readn;
	struct epoll_event ev,*events;

	int efd;
	char buf_in[256];

	events = (struct epoll_event *)malloc(sizeof(*events) * EPOLL_SIZE);

	if ((efd = epoll_create(100)) < 0)
	{
		perror("epoll_create error");
		return 1;
	}

	clilen = sizeof(clientaddr);
	sfd = socket(AF_INET, SOCK_STREAM, 0);	
	if (sfd == -1)
	{
		perror("socket error :");
		close(sfd);
		return 1;
	}
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);
	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	if (bind (sfd, (struct sockaddr *)&addr, sizeof(addr)) == -1)
	{
		close(sfd);
		return 1;
	}
	listen(sfd, 5);

	ev.events = EPOLLIN;
	ev.data.fd = sfd;
	epoll_ctl(efd, EPOLL_CTL_ADD, sfd, &ev);


	while(1)
	{
		n = epoll_wait(efd, events, EPOLL_SIZE, -1);
		if (n == -1 )
		{
			perror("epoll wait error");
		}

		for (i = 0;	i < n; i++)
		{
			if (events[i].data.fd == sfd)
			{
				printf("accept\n");
				cfd = accept(sfd, (SA *)&clientaddr, (socklen_t*)&clilen);
				//ev.events = EPOLLIN | EPOLLOUT;
				//ev.events = EPOLLIN | EPOLLHUP | EPOLLERR | EPOLLRDHUP  ;
				ev.events = EPOLLIN | EPOLLERR;
				ev.data.fd = cfd;
				epoll_ctl(efd, EPOLL_CTL_ADD, cfd, &ev);
				printf("connected\n");

				//tcpSetKeepAlive(cfd, 10, 10, 2, 10);
				//sleep(1);
				close(cfd);
			}
			else
			{
				if (events[i].events & EPOLLIN) 
				{
					printf("epoll in\n");
				
					memset(buf_in, 0x00, 256);
					readn = read(events[i].data.fd, buf_in, 255);
					if (readn <= 0)
					{
						epoll_ctl(efd, EPOLL_CTL_DEL, events[i].data.fd, events);
						close(events[i].data.fd);
						printf("Close fd\n", cfd);
					}
					else
					{
						printf("read data %s\n", buf_in);
					}
				}
				printf("%d ##\n", events[i].events);
			}
		}
	}
}

