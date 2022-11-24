# compile (preprocessing, compile, assembling)
mmap.o: mmap.c
	gcc -c mmap.c

# linking
all: mmap.o
	gcc -o mmap mmap.o 
	./mmap file.txt

run:
	./mmap file.txt

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
	rm -rf mmap
endif

