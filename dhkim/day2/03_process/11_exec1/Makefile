# compile (preprocessing, compile, assembling)
exec1.o: exec1.c
	gcc -c exec1.c

# linking
all: exec1.o
	gcc -o exec1 exec1.o 
	./exec1

run:
	./exec1

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
	rm -rf exec1
endif

