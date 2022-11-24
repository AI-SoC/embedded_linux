# compile (preprocessing, compile, assembling)
syscall.o: syscall.c
	gcc -c syscall.c

# linking
all: syscall.o
	gcc -o syscall syscall.o 
	./syscall

run:
	./syscall

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
	rm -rf syscall
endif

