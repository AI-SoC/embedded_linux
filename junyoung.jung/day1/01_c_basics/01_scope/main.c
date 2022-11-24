#include <stdio.h>

#define F1 14
int g1 = 0;

extern int incr();

int main() {
    printf("a is %d\n", F1);
    incr();
    printf("g1 is %d\n", g1);

    return 0;
}