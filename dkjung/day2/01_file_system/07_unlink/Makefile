# compile (preprocessing, compile, assembling)
unlink.o: unlink.c
	gcc -c unlink.c

# linking
all: unlink.o
	gcc -o unlink unlink.o 
	./unlink file

run:
	./unlink file

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
	rm -rf unlink
endif

