#include<stdio.h>

int g;
extern void decr();
extern void incr();

int main(){
    printf("Running...\n");

    incr();
    printf("g is %d\n", g);

    decr();

    printf("g is %d\n", g);
    return 0;
}
