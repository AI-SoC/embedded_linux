#include <stdio.h>

#define uchar unsigned char
#define ushort unsigned short

// 8-bits
typedef struct {
	uchar b0: 1;
	uchar b1: 1;
	uchar b2: 1;
	uchar b3: 1;
	uchar b4: 1;
	uchar b5: 1;
	uchar b6: 1;
	uchar b7: 1;
} bits8;

// 32-bits
typedef struct {
	uchar CNFG1;
	uchar CNFG2;
	ushort MODE;
} ADC_CONFIG;

typedef union {
	ADC_CONFIG	adc;
	uchar		bytes[4];
	bits8		regs[4];
} flag_32bits;

int main() {
    printf("Running...\n");
	
	ADC_CONFIG adc1 = {
		0x01,
		0x80, 
		0xF000
	};

	flag_32bits flag;
	flag.adc = adc1;
	printf("bytes[3] is 0x%2x\n", flag.bytes[3]);
	flag.regs[3].b7 = 0;
	printf("bytes[3] is 0x%2x\n", flag.bytes[3]);
	flag.regs[3].b7 = 0;
}
