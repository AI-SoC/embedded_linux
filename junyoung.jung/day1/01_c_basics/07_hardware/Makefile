all: main.c 
	gcc -O3 -o main main.c
	objdump -d -S main > main_dis.s 
	./main

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
	rm -rf main
endif

	

