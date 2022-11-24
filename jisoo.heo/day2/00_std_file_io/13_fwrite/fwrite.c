#include <stdio.h> 
#define START_ID 1000

struct student {
    int id;    
    char name[20];  
    int score; 
};


int main(int argc, char* argv[]) 
{  
    struct student record;
    FILE *fp;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s [file name]\n", argv[0]);
        return 1; 
    }

    fp = fopen(argv[1], "wb");
    printf("%-4s %-3s %-4s\n", "ID",  "Name",  "Score"); 	
    while (scanf("%d %s %d", &record.id, record.name, &record.score) == 3) 
        fwrite(&record, sizeof(record), 1, fp);

    fclose(fp);
    return 0;
}  
