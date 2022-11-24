#include <stdio.h>
#include <stdlib.h>

int a;
static int b;
void fun(int n);

int main()
{
    int c;
    static int d;
    char *p;     

    p = (char *) malloc(40);
    fun(5);
}
	
void fun(int n)
{
    int m = 6;
    //     ...
}
