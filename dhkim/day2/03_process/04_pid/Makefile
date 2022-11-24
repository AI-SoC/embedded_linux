# compile (preprocessing, compile, assembling)
pid.o: pid.c
	gcc -c pid.c

# linking
all: pid.o
	gcc -o pid pid.o 
	./pid
	
run:
	./pid

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
	rm -rf pid
endif

