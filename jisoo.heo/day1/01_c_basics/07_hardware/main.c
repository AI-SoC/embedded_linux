#include <stdio.h>

#define uchar unsigned char
#define ushort unsigned short

typedef struct {
	uchar MODE: 4;
	uchar EN  : 1;
	uchar _NA : 2;
	uchar EOC : 1;
} ADCR_REG;

#define HW_EMULATION 1
#ifdef HW_EMULATION
	uchar adc1;
	#define ADCR (*(volatile uchar*)&adc1)
#else
	#define ADCR (*(ADC_REG*)(0xFB000000))
#endif

int main() {
	ADCR = 0x3;

	int g = ADCR + 7;
	printf("g is %d\n", g);
    return 0;
}
