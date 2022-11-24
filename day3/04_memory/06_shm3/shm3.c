#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() 
{
     int shmid;
     char *shmptr1, *shmptr2;
 
     shmid = shmget(IPC_PRIVATE,10*sizeof(char),IPC_CREAT|0666); 
     if (shmid == -1) {
         printf("shmget failed\n");
         exit(0);
     }

     if (fork() == 0) {
         shmptr1 = (char *) shmat(shmid, NULL, 0);
         for (int i=0; i<10; i++)
             shmptr1[i] = i*10; 
         shmdt(shmptr1); 
         exit(0);
     } else {
        wait(NULL);
        shmptr2 = (char *) shmat(shmid, NULL, 0);
	    for (int i=0; i<10; i++)
	        printf("%d ", shmptr2[i]); 
            shmdt(shmptr2); 
	    if (shmctl(shmid,IPC_RMID,NULL)==-1) 
             printf("shmctl failed\n");
     }
     return 0;
}
