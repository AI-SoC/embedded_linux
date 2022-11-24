# compile (preprocessing, compile, assembling)
slink.o: slink.c
	gcc -c slink.c

# linking
all: slink.o
	gcc -o slink slink.o 
	./slink file file_slink

run:
	./slink file file_slink

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
	rm -rf slink file_slink
endif

