#include <stdio.h>

extern int g;

void incr() {
    printf(" - incr()\n");
    g++;
}