# compile (preprocessing, compile, assembling)
fork2.o: fork2.c
	gcc -c fork2.c

# linking
all: fork2.o
	gcc -o fork2 fork2.o 
	./fork2

run:
	./fork2

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
	rm -rf fork2
endif

