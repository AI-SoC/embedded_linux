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
} ADC_REG;

typedef union       //union 영역에 설정된 것은 동일한 메모리 영역이지만, 다른 방식으로 호출하여 데이터 편집 및 읽기가 가능하다.
{
    ADC_REG R;
    unsigned char U;
} ADCR;

int main() {
    printf("Running...\n");

    ADCR adc1;
    adc1.U = 0x13;

    if(adc1.R.EN)
    {
        printf("ADC is enabled.\n");
    }

    adc1.R.MODE = 0xF;
    printf("ADCR is 0x%X\n", adc1.U);

    while(adc1.R.EOC == 0);     //SW 상으로는 무조건 무한루프. 하지만 HW를 체크하는 코드라면, 이부분을 체크하여 다음으로 지나가게 함.
}
