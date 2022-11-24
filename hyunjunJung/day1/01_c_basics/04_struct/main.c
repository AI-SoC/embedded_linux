#include <stdio.h>

typedef struct {
    unsigned char b0: 1;
    unsigned char b1: 1;
    unsigned char b2: 1;
    unsigned char b3: 1;
    unsigned char b4: 1;
    unsigned char b5: 1;
    unsigned char b6: 1;
    unsigned char b7: 1;
} bits8;

typedef struct {

    unsigned char CNFG1;
    unsigned char CNFG2;
    unsigned short MODE;
} ADC_CONFIG;

typedef union {
    ADC_CONFIG adc;
    unsigned char bytes[4];
    bits8 regs[4];

} flag_32bits;

int main() {
    printf("Running...\n");

    ADC_CONFIG adc1 = {0x01, 0x80, 0xF000};
    flag_32bits flag;
    flag.adc = adc1;

    printf("bytes[3] is 0x%2x\n", flag.bytes[3]);
    flag.regs[3].b7 = 0;
    printf("bytes[3] is 0x%2x\n", flag.bytes[3]);


}
