#ifndef HTTPSOCKET_H
#define HTTPSOCKET_H


class HTTPSocket {
private:
	ClientSocket clientSocket;

public:
	string getURL(const string & url);
}



#endif /* HTTPSOCKET_H */
