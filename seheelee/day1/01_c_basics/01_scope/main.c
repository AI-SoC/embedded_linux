#include <stdio.h>
#define F1 14

int g1 = 0;

extern void incr();


int main()
{
    printf("F1 is %d\n", F1);
    incr();
    printf("g1 is %d\n", g1);
    return 0;
}