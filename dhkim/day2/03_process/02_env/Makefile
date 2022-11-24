# compile (preprocessing, compile, assembling)
env.o: env.c
	gcc -c env.c

# linking
all: env.o
	gcc -o env env.o 
	./env
	
run:
	./env

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
	rm -rf env
endif

