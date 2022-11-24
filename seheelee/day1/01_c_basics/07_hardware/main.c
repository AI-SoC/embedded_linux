#include <stdio.h>

typedef struct
{
    //bit 영역이기 때문에 반대로 쓴다
    //[EOC| : | EN | MODE ]
    //  7  6 5  4   3 2 1 0
    unsigned char MODE  : 4;
    unsigned char EN    : 1;
    unsigned char _NA   : 2;
    unsigned char EOC   : 1;
}ADC_REG;

#define HW_EMULATION
#ifdef HW_EMULATION
    unsigned char adc1;
    #define ADCR (*(volatile unsigned char*)&adc1)      //volatile : 반드시 메모리 로드 스토어를 한다. 값이 스스로 바뀔수 있기 때문에 반드시 값을 읽어보고 판단해야함. 무결성이 깨지지 않으려면 하드웨어 영역에 필요.
#else
    #define ADCR (*(ADC_REG*)(0xFB000000))
#endif

int main() {
    ADCR = 0x3;
    //*(0xFB000000) = 0x13;     //임베디드에서는 가능. 이미 할당 되어있다면 가능.

    int g = ADCR + 7;
    printf("g is %d\n", g);
    
    return 0;
}
