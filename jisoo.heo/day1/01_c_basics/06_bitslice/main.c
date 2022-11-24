#include <stdio.h>

#define ADC_ENABLE 0x13

#define uchar unsigned char
#define ushort unsigned short

typedef struct {
	uchar MODE :4;
	uchar EN   :1;
	uchar _NA  :2;
	uchar EOC  :1;
} ADC_REG;

typedef union {
	ADC_REG R;
	uchar   U;
} ADCR;

int main() {
    printf("Running...\n");
	
	ADCR adc1;
	adc1.U = ADC_ENABLE;

	if(adc1.R.EN) {
		printf("ADC is enabled\n");
	}

	adc1.R.MODE=0xf;
	printf("ADCR is 0x%x\n", adc1.U);

	while(adc1.R.EOC == 0);
}
