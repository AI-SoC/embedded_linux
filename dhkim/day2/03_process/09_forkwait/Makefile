# compile (preprocessing, compile, assembling)
forkwait.o: forkwait.c
	gcc -c forkwait.c

# linking
all: forkwait.o
	gcc -o forkwait forkwait.o 
	./forkwait

run:
	./forkwait

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
	rm -rf forkwait
endif

