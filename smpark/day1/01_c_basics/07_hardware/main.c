#include <stdio.h>

typedef struct{
    unsigned char MODE  : 4;
    unsigned char EN    : 1;
    unsigned char _NA   : 2;
    unsigned char EOC   : 1;
} ADC_REG;

#define HW_EMULATION 1

#ifdef HW_EMULATION
    unsigned char adc1;
    #define ADCR (*(volatile unsigned char*)&adc1)
#else
    #define ADCR (*(ADC_REG*)(0xFB000000))
#endif

int main() {
    //임베디드만 가능한 세션 -> 직접 주소 접근이 가능
    //EX) *(0xFB000000) = 0x13;
    ADCR = 0x3;
    int  g  = ADCR + 7;

    printf("g is %d\n", g);
    return 0;
}
