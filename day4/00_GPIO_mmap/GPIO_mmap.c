#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>

#define GPIO_BASE 0xFE200000
#define GPIO_SIZE 256

//pin in 23
//pin out 24

volatile unsigned *gpio, *gset, *gclr, *glev;

int main(void)
{
	int mem_fd;
	void* gpio_map;

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
	gset = gpio+7;
	gclr = gpio+10;
	glev = gpio+13;

 	(*(gpio+2) &= ~(7<<9));		//GPIO IN
	(*(gpio+2) &= ~(7<<12));
	(*(gpio+2) |= (1<<12));		//GPIO OUT

	while(1)
	{
		if((*(glev)&(1<<23))>0)
		{
			printf("SWITCH ON!\n");
			*(gset) |= 1<<24;
		}
		else *(gclr) |= 1<<24;
		usleep(200*1000);
	}

  	munmap(gpio_map, GPIO_SIZE);
	close(mem_fd);
	return 0;
}
