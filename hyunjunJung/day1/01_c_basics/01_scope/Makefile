
main.i: main.c
	cpp main.c > main.i

main.s: main.i
	gcc -S main.i

main.o: main.s
	as -o main.o main.s

foo.o: foo.c
	gcc -c foo.c

all: main.o foo.o
	gcc -o main main.o foo.o
	