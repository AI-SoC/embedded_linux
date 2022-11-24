#include <stdio.h>

typedef struct{
    unsigned char b0: 1;//:1 은 1비트 차지하겠다는 의미
    unsigned char b1: 1;
    unsigned char b2: 1;
    unsigned char b3: 1;
    unsigned char b4: 1;
    unsigned char b5: 1;
    unsigned char b6: 1;
    unsigned char b7: 1;
}bits8;


typedef struct {
    unsigned char CNFG1;//1byte
    unsigned char CNFG2;//1byte
    unsigned short MODE;//2byte
}ADC_CONFIG;//총4byte

typedef union{//union은 어떤 타입으로 쳐다볼지를...
    ADC_CONFIG adc;//4byte짜리 ADC_CONFIG struct로 볼 수도 있고
    unsigned char bytes[4];//1byte씩 4개(총4byte)짜리로 볼 수도 있고
    bits8 regs[4];//하나의공간이 bits 8인 4개(총4byte)로도 볼 수도 있고
    //4byte가 아닌 다른 타입으로도 쓸 수 있는데 그렇게되면, max껄로 쳐다보게된다
}flag_32bits;

int main() {
    printf("Running...\n");
    
    ADC_CONFIG adc1={0x01,0x80,0xF000};
    flag_32bits flag;
    flag.adc = adc1;
    printf("byte[3] is 0x%2X\n",flag.bytes[3]);//byte[3] is 0xF0 인디언때문에 F0'00'이 아니라 'F0'00'이 출력됨
    flag.regs[3].b7 = 0;
    printf("byte[3] is 0x%2X\n",flag.bytes[3]);//byte[3] is 0x70 인디언때문에 '70'00'이 출력됨

}
