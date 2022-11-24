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
    int fd, id;
    char c;
    struct student rec;

   if (argc < 2) {
        fprintf(stderr,  "Usagwe : %s file\n", argv[0]);
        exit(1);
   }

   if ((fd = open(argv[1], O_RDONLY)) == -1) {
        perror(argv[1]);
        exit(2);
    }

    do {
        printf("\nEntery ID (Search):");
        if (scanf("%d", &id) == 1) {
            lseek(fd, (id-START_ID)*sizeof(rec), SEEK_SET);
            if ((read(fd, &rec, sizeof(rec)) > 0) && (rec.id != 0)) 
                printf("ID:%d\t Name:%s\t Score:%d\n", 
                        rec.id, rec.name, rec.score);
            else printf("Record %d Not Found\n", id);
        }
        else printf("Input Error"); 

        printf("Search Again ?(Y/N)");
        scanf(" %c", &c);
    } while (c == 'Y');
   
    close(fd);
    exit(0);
}
