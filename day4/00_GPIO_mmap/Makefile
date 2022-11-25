# compile (preprocessing, compile, assembling)
GPIO_mmap.o: GPIO_mmap.c
	gcc -c GPIO_mmap.c

# linking
all: GPIO_mmap.o
	gcc -o GPIO_mmap GPIO_mmap.o 
	sudo ./GPIO_mmap

run:
	sudo ./GPIO_mmap

clean: 
ifeq ($(OS),Windows_NT)
	del *.o *.i *.s
else
	rm -rf *.o *.i *.s
endif

cleanup: clean
ifeq ($(OS),Windows_NT)
	del *.exe	
else
	rm -rf GPIO_mmap
endif

