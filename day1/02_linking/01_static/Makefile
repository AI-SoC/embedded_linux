inc.o: inc.c
	gcc -c inc.c

dec.o: dec.c
	gcc -c dec.c

main.o: main.c
	gcc -c main.c

libfoo.a: inc.o dec.o
	ar rc libfoo.a inc.o dec.o
	ranlib libfoo.a

lib: libfoo.a

main: libfoo.a main.o
	gcc main.o -L. -lfoo -o main 

all: main

run: 
	./main

