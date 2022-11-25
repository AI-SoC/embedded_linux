# compile (preprocessing, compile, assembling)
multi.o: multi.c
	gcc -c multi.c

# linking
all: multi.o
	gcc -o multi multi.o -lm
	sudo ./multi

run:
	sudo ./multi

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
	rm -rf multi
endif

