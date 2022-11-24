# compile (preprocessing, compile, assembling)
link.o: link.c
	gcc -c link.c

# linking
all: link.o
	gcc -o link link.o 
	./link file file_link

run:
	./link file file_link

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
	rm -rf link file_link
endif

