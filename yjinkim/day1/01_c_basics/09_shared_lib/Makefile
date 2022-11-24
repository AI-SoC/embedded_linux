incr.o: incr.c
	gcc -fPIC -c incr.c
#shared는 -fPIC .. 어느 위치에 있어도 ,, 연속적으로 있지 않아도 된대
#shared는 컴파일 중간에 링킹함.
#(속도는 살짝 줄어드는 단점이 있지만) 메모리 효율적으로 사용

decr.o: decr.c
	gcc -fPIC -c decr.c

main.o: main.c
	gcc -fPIC -c main.c

libfoo.so: incr.o decr.o
	gcc -shared -o libfoo.so incr.o decr.o

all: main.o libfoo.so
	gcc main.o -L. -lfoo -o main
#	gcc main.o -L/원하는경로 -lfoo -o main