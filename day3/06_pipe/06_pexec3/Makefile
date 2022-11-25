# compile (preprocessing, compile, assembling)
pexec3.o: pexec3.c
	gcc -c pexec3.c

# linking
all: pexec3.o
	gcc -o pexec3 pexec3.o 
	./pexec3 ls wc

run:
	./pexec3 ls wc

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
	rm -rf pexec3
endif

