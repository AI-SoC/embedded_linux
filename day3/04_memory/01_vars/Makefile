# compile (preprocessing, compile, assembling)
vars.o: vars.c
	gcc -c vars.c

# linking
all: vars.o
	gcc -o vars vars.o 
	./vars

run:
	./vars

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
	rm -rf vars
endif

