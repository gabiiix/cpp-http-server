#include <iostream>
#include "HttpServer.hpp"
using namespace std;


int main() {

    cout << "Starting C++ HTTP Server..." << endl;

    HttpServer server(8080);
    server.start();

    return 0;
}