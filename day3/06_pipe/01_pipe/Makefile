# compile (preprocessing, compile, assembling)
pipe.o: pipe.c
	gcc -c pipe.c

# linking
all: pipe.o
	gcc -o pipe pipe.o 
	./pipe

run:
	./pipe

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
	rm -rf pipe
endif

