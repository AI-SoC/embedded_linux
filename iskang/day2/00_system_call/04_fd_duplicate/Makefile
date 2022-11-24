# compile (preprocessing, compile, assembling)
dup.o: dup.c
	gcc -c dup.c

# linking
all: dup.o
	gcc -o dup dup.o 
	./dup

run:
	./dup

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
	rm -rf dup myfile
endif

