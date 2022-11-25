#include <stdio.h> 
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define MAXLINE 100

int main( ) 
{
   int fd, length;
   char message[MAXLINE];

   sprintf(message, "Hello from PID %d", getpid());
   length = strlen(message)+1;

   do {
      fd = open("../07_npreader/myPipe", O_WRONLY);
      if (fd == -1) sleep(1);
   } while (fd == -1);

   for (int i = 0; i <= 3; i++) {
      write(fd, message, length);
      sleep(3);
   }
   close(fd);
   return 0;
}
