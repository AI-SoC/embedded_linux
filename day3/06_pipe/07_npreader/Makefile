# compile (preprocessing, compile, assembling)
npreader.o: npreader.c
	gcc -c npreader.c

# linking
all: npreader.o
	gcc -o npreader npreader.o 
	./npreader &

run:
	./npreader &

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
	rm -rf npreader myPipe
endif

