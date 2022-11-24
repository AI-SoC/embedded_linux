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
	
   if ((fp = fopen(argv[1], "rb")) == NULL ) {
      fprintf(stderr, "File read error\n");
      return 2;
   }

   printf("%-4s %-3s %-4s\n", "ID",  "Name",  "Score"); 	

   while (fread(&record, sizeof(record), 1, fp) > 0) 
      if (record.id != 0)
         printf("%10d %6s %6d\n", record.id, record.name, record.score);

   fclose(fp);
   return 0;
}     

