#include <stdio.h>
#include <sys/socket.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd1, fd2, fd3;

    fd1 = socket(PF_INET, SOCK_STREAM, 0);
    fd2 = open("data.txt", O_CREAT | O_WRONLY | O_TRUNC);
    fd3 = socket(PF_INET, SOCK_DGRAM, 0);

    printf("file descripter 1 : %d\n", fd1);
    printf("file descripter 2 : %d\n", fd2);
    printf("file descripter 3 : %d\n", fd3);

    close(fd1);
    close(fd1);
    close(fd1);
    return 0;
}
