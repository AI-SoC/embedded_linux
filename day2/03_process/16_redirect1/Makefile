# compile (preprocessing, compile, assembling)
redirect1.o: redirect1.c
	gcc -c redirect1.c

# linking
all: redirect1.o
	gcc -o redirect1 redirect1.o 
	./redirect1

run:
	./redirect1

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
	rm -rf redirect1
endif

