# compile (preprocessing, compile, assembling)
main.o: main.c
	gcc -c main.c

# linking
all: main.o 
	gcc -o main main.o 
	./main data.txt data_copy.txt

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
	rm -rf main data_copy.txt
endif

	

