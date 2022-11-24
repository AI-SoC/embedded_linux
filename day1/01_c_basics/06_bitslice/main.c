#include <stdio.h>

<<<<<<< HEAD
typedef struct{
    unsigned char MODE : 4;
    unsigned char EN : 1;
    unsigned char _NA : 2;
    unsigned char EOC : 1;
} ADC_REG;

typedef union{
    ADC_REG R;
    unsigned char U;
} ADCR;
=======
#define ADC_EN_IDX 4
#define ADC_EOC    7
>>>>>>> dffb2f72649c40e58684cc4fd787e4719b4c16c1

struct bits8 {
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char en : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;    
};
struct adc_reg {
    unsigned char MODE : 4;
    unsigned char EN   : 1;
    unsigned char _NA  : 2;
    unsigned char EOC  : 1;    
};
typedef union  {
    unsigned char  U; // writing
    struct bits8   B; // Access bit slice
    struct adc_reg R; // Access Reg Field
} PORT0;

int main() {
    printf("Running...\n");
    ADCR adc1;
    adc1.U = 0x13;
    printf("ADCR is 0x%X\n", adc1.U);
    printf("struct size : %d\r\n", sizeof(ADC_REG));
    printf("union size : %d\r\n", sizeof(ADCR));

    if(adc1.R.EN)
        printf("ADC is enabled\n");

    adc1.R.MODE = 0xF;
    printf("ADCR is 0x%X\n", adc1.U);

<<<<<<< HEAD
    //while(adc1.R.EOC == 0); // 하드웨어 코딩 스킬
=======
    unsigned char P0 = 0x95;
>>>>>>> dffb2f72649c40e58684cc4fd787e4719b4c16c1

    // disable ADC
    P0 &= ~(1<<ADC_EN_IDX);
    printf("P0: 0x%02X\n", P0);
    if( P0 & (1<<ADC_EN_IDX)) {
        printf("ADC is Enabled\n");
    } else {
        printf("ADC is Disabled\n");
    }
    
    // Enable ADC
    P0 |= (1<<ADC_EN_IDX);
    printf("P0: 0x%02X\n", P0);
    if( P0 & (1<<ADC_EN_IDX)) {
        printf("ADC is Enabled\n");
    } else {
        printf("ADC is Disabled\n");
    }    

    // Check EOC
    //if( (P0 & (1<<ADC_EOC)) == 0x80) {
    if( (P0 & (1<<ADC_EOC)) == 0) {
       printf("ADC is still on conversion\n");
    } else {
       printf("ADC is ready\n");
    }    

    PORT0 p0;
    p0.U = 0x93;
    printf("Mode is %d\n", p0.R.MODE);
    if(p0.R.EN) 
        printf("ADC is enabled\n");   
    p0.R.EN = 0;
    if(p0.R.EN) 
        printf("ADC is enabled\n");  
    else
        printf("ADC is disabled\n");  
   
    p0.U &= ~(0x0F);
    p0.U |=   0x03;
}