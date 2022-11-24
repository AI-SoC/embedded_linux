
main.i: main.c
	cpp main.c > main.i

main.s: main.i
	gcc -S main.i

main.o: main.s
	as -o main.o main.s

all: main.o foo.o
	gcc -o main main.o foo.o