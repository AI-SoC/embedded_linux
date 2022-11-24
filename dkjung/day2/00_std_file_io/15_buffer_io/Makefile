# compile (preprocessing, compile, assembling)
setbuf.o: setbuf.c
	gcc -c setbuf.c

setvbuf.o: setvbuf.c
	gcc -c setvbuf.c

# linking
all: setbuf.o setvbuf.o
	gcc -o setbuf setbuf.o 
	gcc -o setvbuf setvbuf.o 
	./setbuf
	./setvbuf

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
	rm -rf setbuf setvbuf
endif

	

