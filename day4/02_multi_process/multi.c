#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/wait.h>

#define GPIO_BASE 0xFE200000
#define GPIO_SIZE 256

#define GPIO_IN(g) (*(gpio+((g)/10)) &= ~(7<<(((g)%10)*3)))
#define GPIO_OUT(g) (*(gpio+((g)/10)) |= (1<<(((g)%10)*3)))

#define GPIO_SET(g) (*(gpio+7) = 1<<g)
#define GPIO_CLR(g) (*(gpio+10) = 1<<g)
#define GPIO_GET(g) (*(gpio+13)&(1<<g))

volatile unsigned *gpio;

#define PI 3.14

int main(int argc, char **argv)
{
    int mem_fd;
	int g_sw;
    int status;
	void* gpio_map;

	g_sw = 23;

 	if((mem_fd = open("/dev/mem", O_RDWR | O_SYNC) ) < 0)
	{
		perror("open() /dev/mem\n");
		return -1;
	}

 	gpio_map = mmap(NULL, GPIO_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, mem_fd, GPIO_BASE);
	if(gpio_map == MAP_FAILED)
	{
		printf("[Error] mmap() : %d\n", (int)gpio_map);
		return -1;
	}

	gpio = (volatile unsigned*)gpio_map;

 	GPIO_IN(g_sw);

	int pid = getpid();
    int wpid;
    int buffer[64] = {0, };
    int buf_size = 64;

    int input_num = 0;

    while(input_num<10)
    {
        if(GPIO_GET(g_sw)>0)
        {
            usleep(200*1000);
            input_num++;
            for(int i=0;i<buf_size;i++)
            {
                buffer[i] = (int)((sin(i*12*PI/180)+1)*32) + rand()%8;
            }
            pid = fork();
        }

        if(pid==0)
        {
            int win_size = 5;
            int window = 0;
            int err_rate_b = 0;
            int err_rate_a = 0;

            for(int i=0+(win_size/2);i<buf_size-(win_size/2);i++)
            {
                window = 0;
                err_rate_b += abs((buffer[i]-(int)((sin(i*12*PI/180)+1)*32)));
                for(int j=0;j<win_size;j++)
                {
                    window += buffer[i-(win_size/2)+j];
                }
                buffer[i] = window/win_size;
                err_rate_a += abs((buffer[i]-(int)((sin(i*12*PI/180)+1)*32)));
            }
            for(int i=0;i<buf_size;i++)
            {
                printf("%2d ",buffer[i]);
            }
            printf("\nError level | before : %d  after : %d\n",err_rate_b,err_rate_a);
            exit(0);
        }
    }
    while((wpid = wait(&status)) > 0);
	return 0;
}
