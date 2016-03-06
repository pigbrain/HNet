echo	: hnet_server.cpp hnet_clnt.cpp
	g++ -g hnet_server.cpp -o hnet_server -I../../HCommon/inc/  -I../inc/ -L../src -lHNet
	g++ -g hnet_clnt.cpp -o hnet_clnt -I../../HCommon/inc/  -I../inc/ -L../src -lHNet
test	: clnt.cpp	
	g++ -g server.cpp -o server -lpthread
	g++ -g clnt.cpp -o clnt -lpthread
