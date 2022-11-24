# compile (preprocessing, compile, assembling)
fsize.o: fsize.c
	gcc -c fsize.c

# linking
all: fsize.o
	gcc -o fsize fsize.o 
	./fsize file.txt

run:
	./fsize file.txt

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
	rm -rf fsize
endif

