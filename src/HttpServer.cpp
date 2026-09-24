#include "HttpServer.hpp"
using namespace std;
#include <iostream>
#include <sys/socket.h>

HttpServer::HttpServer(int port)
    : port_(port),
      server_socket_(-1)
{
}

void HttpServer::start()
{
    server_socket_ = socket(AF_INET, SOCK_STREAM, 0);

    if(server_socket_ == -1){
        
        cerr << "Failed to create socket." << endl;
        return;
    }

    cout << "Socket created successfully" << endl;
}