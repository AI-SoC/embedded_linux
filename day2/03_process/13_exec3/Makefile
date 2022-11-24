# compile (preprocessing, compile, assembling)
exec3.o: exec3.c
	gcc -c exec3.c

# linking
all: exec3.o
	gcc -o exec3 exec3.o 
	./exec3

run:
	./exec3

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
	rm -rf exec3
endif

