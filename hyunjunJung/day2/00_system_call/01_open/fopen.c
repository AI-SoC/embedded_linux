#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int fd;

    if ((fd = open (argv[1], O_RDWR)) == -1)
        perror(argv[1]);
    else printf("File %s opened: fd = %d \n", argv[1],fd);

    close(fd);
    exit(0);
} 
