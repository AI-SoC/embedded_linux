# compile (preprocessing, compile, assembling)
touch.o: touch.c
	gcc -c touch.c

# linking
all: touch.o
	gcc -o touch touch.o 
	./touch text.txt

run:
	./touch text.txt

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
	rm -rf touch
endif

