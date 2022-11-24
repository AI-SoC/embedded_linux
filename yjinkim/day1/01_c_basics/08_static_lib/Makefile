incr.o: incr.c
	gcc -c incr.c

decr.o: decr.c
	gcc -c decr.c

main.o: main.c
	gcc -c main.c

libfoo.a: incr.o decr.o
	ar rc libfoo.a incr.o decr.o
	ranlib libfoo.a
#lib원하는이름.a 형식으로

all: main.o libfoo.a
	gcc main.o -L. -lfoo -o main
#	gcc main.o -L/원하는경로 -lfoo -o main