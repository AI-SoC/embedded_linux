#include <stdio.h>

int main() {
    printf("Running...\n");

<<<<<<< HEAD
    int a = 0x12345678;
    int *pa = &a;
    printf("a is 0x%8X st %p\n", a, pa);

    unsigned char* pb = (unsigned char*)pa;
    printf("b is at 0x%p |  0x%2X\n", pb, (*pb+0));

=======
    int a = 10;
    int b = 0x12345678;
    printf("a is %d at 0x%p\n", a, &a);
    printf("b is 0x%8X at 0x%p\n", b, &b);

    int* ap = &a;
    *ap = 200;
    printf("a is %d at 0x%p\n", *ap, &a);

    int* bp = &b;
    printf("a is 0x%8X at 0x%p\n", *bp, &b);

    unsigned char* mbp = (unsigned char*)bp;
    printf("@%p | %2X\n", (mbp+0), *(mbp+0));
    printf("@%p | %2X\n", (mbp+1), *(mbp+1));   
    printf("@%p | %2X\n", (mbp+2), *(mbp+2));
    printf("@%p | %2X\n", (mbp+3), *(mbp+3));
    *(mbp+1) = 0x88;
    printf("a is 0x%8X at 0x%p\n", *bp, &b);
>>>>>>> dffb2f72649c40e58684cc4fd787e4719b4c16c1

    return 0;
}