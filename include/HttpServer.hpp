#pragma once


class HttpServer {

    public:
        explicit HttpServer(int port);

        void start();

    private:
        int port_;
        int server_socket_;

};