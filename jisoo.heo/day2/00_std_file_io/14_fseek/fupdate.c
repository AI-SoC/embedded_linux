#include <stdio.h> 
#define START_ID 1000

struct student {
    int id;    
    char name[20];  
    int score; 
};

int main(int argc, char *argv[]) 
{  
    struct student record;
    int id;
    char c;
    FILE *fp;

    if (argc != 2) {
        fprintf(stderr, "[Usage]: %s [file name]\n", argv[0]);
        return 1;
    }

    if ((fp = fopen(argv[1], "rb+")) == NULL) {
        fprintf(stderr, "File read error\n");
        return 2;
    }

    do {
        printf("Enter ID (Update): ");
        if (scanf("%d", &id) == 1) {
            fseek(fp, (id - START_ID) * sizeof(record), SEEK_SET);
            if ((fread(&record, sizeof(record), 1, fp) > 0) && (record.id != 0))
            {
                printf("ID: %8d Name: %4s Score: %4d\n", 
                       record.id, record.name, record.score);
                printf("Enter New Score: ");
                scanf("%d", &record.score);
                fseek(fp, -sizeof(record), SEEK_CUR);
                fwrite(&record, sizeof(record), 1, fp);
           }
           else printf("Record %d Not Found\n", id);
        }  
        else printf("Input Error\n");

        printf("Update Another Student?(Y/N)");
        scanf(" %c",&c);
    } while (c == 'Y');
    fclose(fp);
    return 0;
} 

