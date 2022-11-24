#include <stdio.h>

int main() {
    printf("Running...\n");

    //0x-> 한자리 당 4 bit --> 1 nibble -> 2개의 nibble은 1개의 byte!
    int a = 0x12345678;
    int* ap = &a;
    printf("a is 0x%8X at %p\n", a, ap);

    unsigned char* bp = (unsigned char*) ap;
    //78 출력 -> 0x123456(78) -> LSB가 낮은 주소
    printf("@%p | %2X\n", bp+0, *(bp + 0));
    printf("@%p | %2X\n", bp+1, *(bp + 1));
    printf("@%p | %2X\n", bp+2, *(bp + 2));
    printf("@%p | %2X\n", bp+3, *(bp + 3));

    printf("\n");
    *(bp+2) = 0x5A;
    printf("@%p | %2X\n", bp+0, *(bp + 0));
    printf("@%p | %2X\n", bp+1, *(bp + 1));
    printf("@%p | %2X\n", bp+2, *(bp + 2));
    printf("@%p | %2X\n", bp+3, *(bp + 3));


    return 0;
}
