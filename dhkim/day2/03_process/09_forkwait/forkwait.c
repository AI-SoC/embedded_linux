#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
    int pid, child, status;

    printf("[%d] parent process start \n", getpid( ));
    pid = fork();
    if (pid == 0) {
        printf("[%d] child process start \n", getpid( ));
        exit(1);
    }

    child = wait(&status);   
    printf("[%d] child process %d terminated \n", getpid(), child);
    printf("\ttermination code %d\n", status>>8);
}
