# compile (preprocessing, compile, assembling)
atexit.o: atexit.c
	gcc -c atexit.c

# linking
all: atexit.o
	gcc -o atexit atexit.o 
	./atexit 
run:
	./atexit

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
	rm -rf atexit
endif

