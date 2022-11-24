#include <stdio.h>
#include <unistd.h>

int main()
{ 
	printf("My proces ID : %d \n", getpid());
	printf("My parent process ID : %d \n", getppid());
}
