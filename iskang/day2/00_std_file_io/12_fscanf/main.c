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

   fp = fopen(argv[1], "r");
   printf("%-4s %-4s %-2s\n", "ID",  "Name",  "Score"); 	

   while (fscanf(fp,"%d %s %d", &record.id, record.name, &record.score) == 3) 
      printf("%d %s %d\n", record.id, record.name, record.score);
	
   fclose(fp);
   return 0;
}   

