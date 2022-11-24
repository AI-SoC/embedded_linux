#include <stdio.h>

typedef struct{
    unsigned char MODE : 4; 
    unsigned char EN : 1;
    unsigned char _NA : 2;
    unsigned char EOC : 1;
    //EOC 1칸(1bit)|_NA 2칸|EN1칸|MODE 4칸 //리틀인디언일경우의 배치 [7][6][5][4][3][2][1][0]

}ADC_REG;

typedef union{
    ADC_REG R;
    unsigned char U;
}ADCR;

int main() {
    printf("Running...\n");

    ADCR adc1;
    adc1.U = 0x13;

    if(adc1.R.EN){
        printf("ADC is enabled\n");
    }

    adc1.R.MODE = 0xF;
    printf("ADCR is 0x%X\n",adc1.U);//ADC is enabledADCR is 0x1F

    while(adc1.R.EOC == 0){
        //EOC는 end of conversion이라서 컨벌트 다 되면 0에서 1로 바뀐다
        //컨벌팅 중에 하고 싶은 일을 적으면 된다
    }

}
