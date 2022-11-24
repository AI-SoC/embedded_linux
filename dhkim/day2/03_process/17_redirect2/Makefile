# compile (preprocessing, compile, assembling)
redirect2.o: redirect2.c
	gcc -c redirect2.c

# linking
all: redirect2.o
	gcc -o redirect2 redirect2.o 
	./redirect2

run:
	./redirect2

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
	rm -rf redirect2
endif

