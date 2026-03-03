#include <iostream>
#include <sys/socket.h>
#include <sys/un.h>
#include <string>
#include <unistd.h>
#include <cstring>
#include <cerrno>
#include <stdexcept>
#include <format>
#include <vector>
#include <sys/select.h>

int main() {
    std::cout << "Hello, World from server." << std::endl;

    int fd = socket(AF_INET, SOCK_STREAM, 0);
    // struct sockaddr_in addr = {};


    return 0;
}