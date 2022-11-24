# compile (preprocessing, compile, assembling)
ftype.o: ftype.c
	gcc -c ftype.c

# linking
all: ftype.o
	gcc -o ftype ftype.o 
	./ftype text.txt directory device

run:
	./ftype text.txt directory device

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
	rm -rf ftype
endif

