#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int sock;
    struct sockaddr_in serv_addr;
    char message[30];
    int str_len;
    if(argc != 3)
    {
        printf("Usage : %s <IP> <port>\n", argv[0]);
        exit(1);
    }
}
