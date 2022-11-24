#include <stdio.h>

int main() {
    printf("Running...\n");

    int a = 0x12345678;
    int* ap =&a;

    printf("a is 0x%8X at %p\n",a,ap); //a is 0x12345678 at 0xbeec5154

    unsigned char* bp =(unsigned char*)ap;
    printf("@%p | 0x%2X\n",bp,*(bp+0)); //@0xbeec5154 | 0x78
    printf("@%p | 0x%2X\n",bp+1,*(bp+1)); //@0xbedcd155 | 0x56
    printf("@%p | 0x%2X\n",bp+2,*(bp+2)); //@0xbedcd156 | 0x34
    printf("@%p | 0x%2X\n",bp+3,*(bp+3)); //@0xbedcd157 | 0x12

    *(bp+2) = 0x88;
    printf("@%p | 0x%2X\n",bp,*(bp+0)); //@0xbeec5154 | 0x78
    printf("@%p | 0x%2X\n",bp+1,*(bp+1)); //@0xbedcd155 | 0x56
    printf("@%p | 0x%2X\n",bp+2,*(bp+2)); //@0xbee36156 | 0x88 //여기가 바뀜! //빅인디언,리틀인디언 고려해서 인덱스 순서 봐야해~
    printf("@%p | 0x%2X\n",bp+3,*(bp+3)); //@0xbedcd157 | 0x12


    return 0;
}
