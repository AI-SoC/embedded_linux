#include <utime.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    if (argc < 2) {
        fprintf(stderr, "Usage: utime file1 \n");
        exit(-1);
    }
 
    utime(argv[1], NULL); 
}
