#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MAX 24
#define START_ID 1000
struct student {
   char name[MAX];
   int id;
   int score;
};

int main(int argc, char *argv[])
{
    int fd;
    struct student rec;

    if (argc < 2) {
        fprintf(stderr,  "Usage : %s file\n", argv[0]);
        exit(1);
    }

    if ((fd = open(argv[1],O_WRONLY |O_CREAT, 0640))==-1) {
        perror(argv[1]);
        exit(2);
    }

    printf("%-4s %-3s %-4s\n", "ID",  "Name",  "Score"); 
    while (scanf("%d %s %d", &rec.id, rec.name, &rec.score) ==  3) {
        lseek(fd, (rec.id - START_ID) * sizeof(rec), SEEK_SET);
        write(fd, &rec, sizeof(rec) );
    }

    close(fd);
    exit(0);
}