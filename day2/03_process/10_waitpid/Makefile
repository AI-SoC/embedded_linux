# compile (preprocessing, compile, assembling)
waitpid.o: waitpid.c
	gcc -c waitpid.c

# linking
all: waitpid.o
	gcc -o waitpid waitpid.o 
	./waitpid

run:
	./waitpid

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
	rm -rf waitpid
endif

