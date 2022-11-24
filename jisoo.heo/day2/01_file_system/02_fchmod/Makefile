# compile (preprocessing, compile, assembling)
fchmod.o: fchmod.c
	gcc -c fchmod.c

# linking
all: fchmod.o
	gcc -o fchmod fchmod.o 
	./fchmod 747 text.txt

run:
	./fchmod 747 text.txt

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
	rm -rf fchmod
endif

