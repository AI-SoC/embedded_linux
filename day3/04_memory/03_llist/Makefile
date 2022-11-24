# compile (preprocessing, compile, assembling)
stud2.o: stud2.c
	gcc -c stud2.c

# linking
all: stud2.o
	gcc -o stud2 stud2.o 
	./stud2

run:
	./stud2

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
	rm -rf stud2
endif

