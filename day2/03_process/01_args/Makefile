# compile (preprocessing, compile, assembling)
args.o: args.c
	gcc -c args.c

# linking
all: args.o
	gcc -o args args.o 
	./args text.txt directory device

run:
	./args text.txt directory device

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
	rm -rf args
endif

