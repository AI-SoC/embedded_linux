# compile (preprocessing, compile, assembling)
fork3.o: fork3.c
	gcc -c fork3.c

# linking
all: fork3.o
	gcc -o fork3 fork3.o 
	./fork3 

run:
	./fork3

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
	rm -rf fork3
endif

