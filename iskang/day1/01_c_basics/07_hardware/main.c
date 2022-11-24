#include <stdio.h>

typedef struct{
    unsigned char MODE: 4;
    unsigned char EN: 1;
    unsigned char _NA: 2;
    unsigned char EOC: 1;

}ADC_REG;

#define HW_EMULATION 1

#ifdef HW_EMULATION
    unsigned char adc1;
    #define ADCR (*(volatile unsigned char*)&adc1)//반드시 해당영역은 메모리 load/store를 함, 무결성을 위해 캐쉬에 값 있어도 다시 가져옴
#else
    #define ADCR (*(ADC_REG*)(0xFB000000))
#endif

int main() {
    printf("ADCR is %d\n", ADCR);
    ADCR = 0x3;
    int g = ADCR +7;
    // *(0xFB000000) = 0x13
    printf("g is %d\n", g);
    return 0;
}
