#include <stdio.h>

extern int g;

void decr(){
    printf(" - decr() \n");
    g--;
}