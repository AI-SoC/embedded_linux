#include <unistd.h> 
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int  fd, fd2;

    if((fd = creat("myfile", 0600)) == -1)
        perror("myfile");

    write(fd, "Hello! Linux", 12);  
    fd2 = dup(fd);
    write(fd2, "Bye! Linux", 10);  
    exit(0); 
}
