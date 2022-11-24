#include <stdio.h>

int g;

extern void decr();
extern void incr();

int main()
{   
    printf("main() running ...\n");

    g=0;

    decr();
    incr();

    printf("g is %d\n", g);

    return 0;
}