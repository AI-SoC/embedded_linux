#include <stdio.h>

typedef struct {
    unsigned char MODE  : 4;
    unsigned char EN    : 1;
    unsigned char _NA   : 2;
    unsigned char EOC   : 1;
} ADC_REG;

typedef union {

    ADC_REG R;
    unsigned char U;
} ADCR;

int main() {
    printf("Running...\n");

    ADCR adc1;
    adc1.U = 0x13;

    if(adc1.R.EN){
        printf("ADC is endabled\n");
        
        adc1.R.MODE = 0x0f;
        printf("ADCR is 0x%x\n", adc1.U);

        while(adc1.R.EOC == 0);
    }

}
