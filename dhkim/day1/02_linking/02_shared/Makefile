inc.o: inc.c
	gcc -fPIC -c inc.c

dec.o: dec.c
	gcc -fPIC -c dec.c

main.o: main.c
	gcc -fPIC -c main.c

libfoo.so: inc.o dec.o
	gcc -shared -o libfoo.so inc.o dec.o

lib: libfoo.so

main: libfoo.so main.o
	gcc main.o -L. -lfoo -o main

all: main

run: 
	./main

clean:
	rm -rf *.o
	rm -rf main

