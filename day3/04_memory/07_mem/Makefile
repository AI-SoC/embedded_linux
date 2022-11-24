# compile (preprocessing, compile, assembling)
mem.o: mem.c
	gcc -c mem.c

# linking
all: mem.o
	gcc -o mem mem.o 
	./mem

run:
	./mem

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
	rm -rf mem
endif

