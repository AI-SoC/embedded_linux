# compile (preprocessing, compile, assembling)
exec2.o: exec2.c
	gcc -c exec2.c

# linking
all: exec2.o
	gcc -o exec2 exec2.o 
	./exec2

run:
	./exec2

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
	rm -rf exec2
endif

