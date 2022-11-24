# compile (preprocessing, compile, assembling)
fork1.o: fork1.c
	gcc -c fork1.c

# linking
all: fork1.o
	gcc -o fork1 fork1.o 
	./fork1 
	
run:
	./fork1 

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
	rm -rf fork1
endif

