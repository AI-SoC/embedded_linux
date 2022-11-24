#include <stdio.h>

typedef struct{
    unsigned char MODE:4;
    unsigned char EN : 1 ;
    unsigned char _NA : 2;
    unsigned char EOC : 1;
}ADC_REG;

#define HW_EMULATION 1
#ifdef HW_EMULATION
    unsigned char adc1;
    //#define ADCR (*(unsigned char*)&adc1) //int g = ADCR + 7; //g가 10으로 고정됨
    #define ADCR (*(volatile unsigned char*)&adc1) //고정되지않고 바뀔 수 있음을 명시
#else
    #define ADCR (*(ADC_REG*)(0xFB000000))
#endif

int main() {

    ADCR = 0x3;//*(0xFB000000) = 0x3 .. 주소에 직접 값 대입
    
    int g = ADCR + 7;

    printf("g is %d/n",g); // g is 10

    return 0;
}
