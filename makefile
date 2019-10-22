server client:	Client.cpp Server.cpp makefile
	g++ Client.cpp -o client -lpthread
	g++ Server.cpp -o server -lpthread