#include <stdio.h>

typedef struct{
    unsigned char MODE: 4;
    unsigned char EN: 1;
    unsigned char _NA: 2;// 안쓰는 영역(언더바로 표현), 고성능 칩일때 열릴수도
    unsigned char EOC: 1;//End of conversion

}ADC_REG;

typedef union {
    ADC_REG R;
    unsigned char U;
}ADCR;


int main() {
    printf("Running...\n");

    ADCR adc1;
    adc1.U = 0x13;
    adc1.U = 0x10;

    if(adc1.R.EN)
        printf("ADC is enabled\n");
    
    adc1.R.MODE = 0xF;
    printf("ADCR is 0x%X\n", adc1.U);

    while (adc1.R.EOC == 0); //loop blocking, HW/SW sync, Polling
    

}
