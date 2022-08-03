#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void error_handling(const char* message);
#define BUF_SIZE 100
int main()
{
    int fd;
    char buf[BUF_SIZE];

    fd = open("data.txt", O_RDONLY);
    if(fd == -1)
        error_handling("open() error");

    printf("file descript : %d\n", fd);

    if(read(fd, buf, sizeof(buf))==-1)
        error_handling("read() error");

    printf("file data: %s\n", buf);
    close(fd);
    return 0;
}


void error_handling(const char* message)
{
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}
