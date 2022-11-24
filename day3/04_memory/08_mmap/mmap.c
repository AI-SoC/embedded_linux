 #include <stdio.h>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>
 #include <unistd.h>
 #include <stdlib.h>
 #include <sys/mman.h>
 
int main(int argc, char *argv[])
{
    struct stat sbuf;
    char *p;
    int fd;

    if (argc < 2) {
        fprintf(stderr, "Usage: %s file\n", argv[0]);
	    exit(1); 
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open"); 
	    exit(1); 
    }

    if (fstat(fd, &sbuf) == -1) {
        perror("fstat"); 
	    exit(1); 
    }

    p = mmap(0, sbuf.st_size, PROT_READ, MAP_SHARED, fd, 0);
    if (p == MAP_FAILED) {
        perror("mmap"); 
        exit(1); 
    }

    for (long l = 0; l < sbuf.st_size; l++)
        putchar(p[l]);

    close(fd); 
    munmap(p, sbuf.st_size);
    return 0;
}
