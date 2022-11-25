# compile (preprocessing, compile, assembling)
pexec1.o: pexec1.c
	gcc -c pexec1.c

# linking
all: pexec1.o
	gcc -o pexec1 pexec1.o 
	./pexec1 ls

run:
	./pexec1 ls

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
	rm -rf pexec1
endif

