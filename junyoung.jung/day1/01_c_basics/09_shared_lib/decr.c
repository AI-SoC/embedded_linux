#include <stdio.h>

extern int g;

void decr() {
    printf(" - dec()\n");
    g--;
}