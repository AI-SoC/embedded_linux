# compile (preprocessing, compile, assembling)
main.o: main.c
	gcc -c main.c

mysystem.o: mysystem.c
	gcc -c mysystem.c

# linking
all: main.o mysystem.o
	gcc -o main main.o mysystem.o

	./main

run:
	./main

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
	rm -rf main
endif

