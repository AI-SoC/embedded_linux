
incr.o: incr.c
	gcc -fPIC -c incr.c
	# -fPIC : shared library option

decr.o: decr.c
	gcc -fPIC -c decr.c
	
main.o: main.c
	gcc -fPIC -c main.c

libfoo.so: incr.o decr.o
	gcc -shared -o libfoo.so incr.o decr.o

all: main.o libfoo.a
	gcc main.o -L. -lfoo -o main