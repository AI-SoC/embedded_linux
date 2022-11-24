# compile (preprocessing, compile, assembling)
fopen.o: fopen.c
	gcc -c fopen.c

# linking
all: fopen.o
	gcc -o fopen fopen.o 
	./fopen file.txt

run:
	./fopen file.txt

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
	rm -rf fopen
endif

