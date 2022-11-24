#include <stdio.h>

int main() {
    printf("Running...\n");

    int a = 0x12345678;
    int* ap = &a;
    printf("a is 0x%8X at %p\n", a, ap);

    unsigned char* bp = (unsigned char*)ap;
    *(bp+2) = 0x5A;

    printf("first byte of a is 0x%2X at %p\n", *(bp+0), bp);
    printf("first byte of a is 0x%2X at %p\n", *(bp+1), bp+1);
    printf("first byte of a is 0x%2X at %p\n", *(bp+2), bp+2);
    printf("first byte of a is 0x%2X at %p\n", *(bp+3), bp+3);
    return 0;
}
