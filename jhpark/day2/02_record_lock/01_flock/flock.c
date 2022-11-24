#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/file.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char **argv )
{
    int fd;

     fd = open(argv[1], O_WRONLY | O_CREAT, 0600);
     if (flock(fd, LOCK_EX) != 0) {
         printf("flock error\n");
         exit(0);
     }

     for (int i = 0; i < 5; i++) {
         printf("file lock %d : %d\n", getpid(), i);
         sleep(1);
     }

     if (flock(fd, LOCK_UN) != 0) {
         printf("unlock error\n");
     }
     close(fd);
}
