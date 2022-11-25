# compile (preprocessing, compile, assembling)
shellpipe.o: shellpipe.c
	gcc -c shellpipe.c

# linking
all: shellpipe.o
	gcc -o shellpipe shellpipe.o 
	./shellpipe

run:
	./shellpipe

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
	rm -rf shellpipe
endif

