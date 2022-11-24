# compile (preprocessing, compile, assembling)
flock.o: flock.c
	gcc -c flock.c

# linking
all: flock.o
	gcc -o flock flock.o 
	./flock file

run:
	./flock file

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
	rm -rf flock file
endif

