main.i: main.c
	cpp main.c > main.i

main.s: main.i
	gcc -S main.i

main.o: main.s
	as -o main.o main.s

foo.i: foo.c
	cpp foo.c > foo.i

foo.s: foo.i
	gcc -S foo.i

foo.o: foo.s
	as -o foo.o foo.s

all: main.o foo.o
	gcc -o main main.o foo.o

clear:
	rm *.i
	rm *.s
	rm *.o

run:
	./main