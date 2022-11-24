#include <stdio.h>

int g;

extern void decr();
extern void incr();


int main() {
    printf("main() is running...\n");

    g = 0;

    incr();
    printf(">> %X\n", g);
    decr();
    printf(">> %X\n", g);
    return 0;
}