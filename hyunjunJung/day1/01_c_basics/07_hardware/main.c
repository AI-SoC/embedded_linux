#include <stdio.h>

typedef struct {
    unsigned char MODE: 4;
    unsigned char EN : 1;
    unsigned char _NA : 2;
    unsigned char EOC : 1;
} ADC_REG;

#define HW_EMULATION;
#ifdef HW_EMULATION
    unsigned char adc1;
    #define ADCR (*(volatile unsigned char*)&adc1)
#else
    #define ADCR (*(ADC_REG*)(0xFB000000))
#endif

int main() {
    ADCR = 0x3;
    
    int g = ADCR + 7;

    printf("g is %d\n", g);

    return 0;
}
