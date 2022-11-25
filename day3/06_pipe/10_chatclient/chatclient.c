#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#define MAXLINE 256

int main() 
{
    int fd1, fd2, n;
    char inmsg[MAXLINE];

    fd1 = open("../09_chatserver/chatfifo1", O_RDONLY);
    fd2 = open("../09_chatserver/chatfifo2", O_WRONLY);
    if(fd1 == -1 || fd2 == -1) {
        perror("open");
        exit(1);
    }

    printf("Client Start  \n");
    while(1) {
        n = read(fd1, inmsg, MAXLINE);
        printf("[서버] -> %s\n", inmsg);
        printf("클라이언트 : ");
        fgets(inmsg, MAXLINE, stdin);
        write(fd2, inmsg, strlen(inmsg)+1);
    }
}
