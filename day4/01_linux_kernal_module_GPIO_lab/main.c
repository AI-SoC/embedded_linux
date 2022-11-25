#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void main(int argc, char** argv){
	char buf[BUFSIZ];
	char i = 0;
	int fd = -1;
	
	if(argc != 2 && argc != 3){
		printf("./main [mode] [set num]\n");
		exit(0);	
	}

	if(strcmp(argv[1],"w")==0)
	{
		printf("gpio set: %s\n", argv[2]);
		fd=open("/dev/ledtest", O_RDWR);
		printf("fd: %d\n", fd);
		write(fd, argv[2], strlen(argv[2]));
		read(fd, buf, strlen(argv[1]));
		memset(buf, 0, BUFSIZ);
	}

	if(strcmp(argv[1],"r")==0)
	{
		fd=open("/dev/ledtest", O_RDWR);
		printf("fd: %d\n", fd);
		write(fd, "2", strlen("2"));
		memset(buf, 0, BUFSIZ);
		read(fd, buf, strlen("2"));
		printf("gpio read: %s \n", buf);
	}
	
	
	close(fd);
}
