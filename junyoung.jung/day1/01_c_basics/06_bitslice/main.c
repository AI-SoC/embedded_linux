#include <stdio.h>

typedef struct {
    unsigned char MODE  : 4;    // lsb
    unsigned char EN    : 1;
    unsigned char _NA   : 2;
    unsigned char EOC   : 1;    // msb
} ADC_REG;  // 8bits

typedef union {
    ADC_REG       R;
    unsigned char U;
} ADCR;

int main() {
    printf("Running...\n");

    ADCR adc1;
    adc1.U = 0x13;

    if(adc1.R.EN) {
        printf("ADC is enabled\n");
    }

    adc1.R.MODE = 0xF;
    printf("ADCR is 0x%X\n", adc1.U);

    while(adc1.R.EOC == 0); // polling
}
