#include <stdio.h>

typedef struct{
    unsigned char b0 : 1;
    unsigned char b1 : 1;
    unsigned char b2 : 1;
    unsigned char b3 : 1;
    unsigned char b4 : 1;
    unsigned char b5 : 1;
    unsigned char b6 : 1;
    unsigned char b7 : 1;
} bits8;

typedef struct{
    unsigned char CNFG1;
    unsigned char CNFG2;
    unsigned short MODE ;
} ADC_CNFG;

typedef union{
    ADC_CNFG adc;
    unsigned char bytes[4];
    bits8   regs[4];
} flag_32bits;

int main() {
    printf("Running...\n");
    printf("struct size : %d\r\n", sizeof(ADC_CNFG));
    ADC_CNFG adc1 = {0x01, 0x80, 0xF0};
    flag_32bits flag;
    flag.adc = adc1;
    printf("bytes is 0x%8X\n", flag.bytes[3]);
    printf("struct size : %d\r\n", sizeof(ADC_CNFG));
    flag.regs[3].b7 = 0;
    printf("bytes is 0x%8X\n", flag.bytes[3]);
    printf("union size : %d\r\n", sizeof(flag_32bits));

}
