#include <stdio.h>

int main() {
    printf("Running...\n");

    int a = 0x12345678;
    int *pa = &a;
    printf("a is 0x%8X st %p\n", a, pa);

    unsigned char* pb = (unsigned char*)pa;
    printf("b is at 0x%p |  0x%2X\n", pb, (*pb+0));


    return 0;
}
