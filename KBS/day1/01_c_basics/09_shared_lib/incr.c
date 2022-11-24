#include <stdio.h>

extern int g;

void incr() {
    printf(" + inc() \n");
    g++;
}