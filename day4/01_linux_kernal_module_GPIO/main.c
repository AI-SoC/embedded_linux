#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void main(int argc, char** argv){
	char buf[BUFSIZ];
	char i = 0;
	int fd = -1;
	
	if(argc != 2){
		printf("./main [set num]\n");
		exit(0);	
	}
	printf("gpio set: %s\n", argv[1]);
	fd =open("/dev/ledtest", O_RDWR);
	printf("fd: %d\n", fd);
	write(fd, argv[1], strlen(argv[1]));
	memset(buf, 0, BUFSIZ);
	read(fd, buf, strlen(argv[1]));
	printf("read: %s \n", buf);
	
	close(fd);
}
