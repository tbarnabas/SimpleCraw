#include "HttpSocket.h"

class HTTPSocket {
private:
	ClientSocket clientSocket;

public:
	string getURL(const string & url);
}
