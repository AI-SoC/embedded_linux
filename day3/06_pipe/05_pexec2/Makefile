# compile (preprocessing, compile, assembling)
pexec2.o: pexec2.c
	gcc -c pexec2.c

# linking
all: pexec2.o
	gcc -o pexec2 pexec2.o 
	./pexec2 ls

run:
	./pexec2 ls

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
	rm -rf pexec2
endif

