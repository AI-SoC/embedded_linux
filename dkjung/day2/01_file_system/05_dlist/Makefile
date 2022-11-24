# compile (preprocessing, compile, assembling)
list1.o: list1.c
	gcc -c list1.c

list2.o: list2.c
	gcc -c list2.c

# linking
all: list1.o list2.o
	gcc -o list1 list1.o 
	gcc -o list2 list2.o

	./list1
	./list2

run:
	./list1
	./list2

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
	rm -rf list1 list2
endif

