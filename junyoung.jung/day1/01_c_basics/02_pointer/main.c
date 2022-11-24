#include <stdio.h>

int main() {
    printf("Running...\n");

    int a = 0x12345678; // 4byte
    int* ap = &a;
    printf("a is 0x%8X at %p\n", a, ap);

    unsigned char* bp = (unsigned char*)ap;
    printf("@%p | 0x%2X\n", bp+0, *(bp+0));
    printf("@%p | 0x%2X\n", bp+1, *(bp+1));
    printf("@%p | 0x%2X\n", bp+2, *(bp+2));
    printf("@%p | 0x%2X\n", bp+3, *(bp+3));

    return 0;
}
