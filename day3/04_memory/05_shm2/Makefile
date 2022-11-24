# compile (preprocessing, compile, assembling)
shm2.o: shm2.c
	gcc -c shm2.c

# linking
all: shm2.o
	gcc -o shm2 shm2.o 
	./shm2

run:
	./shm2

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
	rm -rf shm2
endif

