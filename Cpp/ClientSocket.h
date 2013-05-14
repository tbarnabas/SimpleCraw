#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <WinSock2.h>
#include <string>
typedef byte char

class ClientSocket
{
private:
	static bool WSA_LOADED;
  SOCKET s_;

public: 
	ClientSocket();
	~ClientSocket();

	connect(string host, int port);
	close();

	int receive(byte * buffer, int read_len); 
  int send(const byte * buffer,  int write_len);
}

#endif /* CLIENTSOCKET_H */

