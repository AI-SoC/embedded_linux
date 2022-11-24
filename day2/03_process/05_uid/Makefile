# compile (preprocessing, compile, assembling)
uid.o: uid.c
	gcc -c uid.c

# linking
all: uid.o
	gcc -o uid uid.o 
	./uid

run:
	./uid

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
	rm -rf uid
endif

