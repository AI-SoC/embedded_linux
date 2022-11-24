<<<<<<< HEAD
main.i: main.c
	cpp main.c > main.i

main.s: main.i
	gcc -S main.i

main.o: main.s
	as -o main.o main.s

foo.o: foo.cpp
	gcc -c foo.c

all: main.o foo.o
	gcc -o main main.o foo.o

=======
# compile (preprocessing, compile, assembling)
main.o: main.c
	gcc -c main.c

foo.o: foo.c
	gcc -c foo.c

# linking
all: main.o foo.o
	gcc -o main main.o foo.o
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

	

>>>>>>> dffb2f72649c40e58684cc4fd787e4719b4c16c1
