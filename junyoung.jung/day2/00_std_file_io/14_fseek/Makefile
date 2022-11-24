# compile (preprocessing, compile, assembling)
fwrite.o: fwrite.c
	gcc -c fwrite.c

fread.o: fread.c
	gcc -c fread.c

fupdate.o: fupdate.c
	gcc -c fupdate.c

# linking
all: fwrite.o fread.o fupdate.o
	gcc -o fw fwrite.o 
	gcc -o fr fread.o 
	gcc -o fu fupdate.o

	./fw data.txt 
	./fr data.txt
	./fu data.txt
	./fr data.txt

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
	rm -rf fw fr fu
endif

	

