# compile (preprocessing, compile, assembling)
shm3.o: shm3.c
	gcc -c shm3.c

# linking
all: shm3.o
	gcc -o shm3 shm3.o 
	./shm3

run:
	./shm3

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
	rm -rf shm3
endif

