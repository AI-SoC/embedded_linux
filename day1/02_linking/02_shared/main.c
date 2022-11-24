#include <stdio.h>

int g;

extern void dec();
extern void inc();

int main() {
    printf("main() running ...\n");
    g = 0;
    dec();
    inc();

    printf("g is %d\n", g);

    return 0;
}

