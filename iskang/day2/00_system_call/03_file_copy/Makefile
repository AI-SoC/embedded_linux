# compile (preprocessing, compile, assembling)
copy.o: copy.c
	gcc -c copy.c

# linking
all: copy.o
	gcc -o copy copy.o 
	./copy file.txt file_copy.txt

run:
	./copy file.txt file_copy.txt

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
	rm -rf copy file_copy.txt
endif

