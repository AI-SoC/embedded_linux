# compile (preprocessing, compile, assembling)
shm1.o: shm1.c
	gcc -c shm1.c

# linking
all: shm1.o
	gcc -o shm1 shm1.o 
	./shm1

run:
	./shm1

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
	rm -rf shm1
endif

