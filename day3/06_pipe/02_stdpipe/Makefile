# compile (preprocessing, compile, assembling)
stdpipe.o: stdpipe.c
	gcc -c stdpipe.c

# linking
all: stdpipe.o
	gcc -o stdpipe stdpipe.o 
	./stdpipe

run:
	./stdpipe

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
	rm -rf stdpipe
endif

