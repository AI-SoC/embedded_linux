# compile (preprocessing, compile, assembling)
rdlock.o: rdlock.c
	gcc -c rdlock.c

wrlock.o: wrlock.c
	gcc -c wrlock.c

# linking
all: rdlock.o wrlock.o
	gcc -o rdlock rdlock.o
	gcc -o wrlock wrlock.o

	./wrlock data
	./rdlock data

run:
	./wrlock data
	./rdlock data

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
	rm -rf rdlock wrlock data
endif

