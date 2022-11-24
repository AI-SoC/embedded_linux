# compile (preprocessing, compile, assembling)
stud1.o: stud1.c
	gcc -c stud1.c

# linking
all: stud1.o
	gcc -o stud1 stud1.o 
	./stud1

run:
	./stud1

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
	rm -rf stud1
endif

