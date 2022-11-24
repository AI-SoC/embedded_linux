# compile (preprocessing, compile, assembling)
cptime.o: cptime.c
	gcc -c cptime.c

# linking
all: cptime.o
	gcc -o cptime cptime.o 
	./cptime file1 file2

run:
	./cptime file1 file2

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
	rm -rf cptime
endif

