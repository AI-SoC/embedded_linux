#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[32]="Do you like Linux?";
    char *p,*q;

    p = (char *) malloc(32);
    memcpy(p, str, strlen(str));  
    puts(p);
    memset(p+12,'l',1);
    puts(p);

    q = (char *) memchr(p,'l',18);
    puts(q);
    memmove(str+12,str+7,10); 
    puts(str);
}
