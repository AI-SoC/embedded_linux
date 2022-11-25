# compile (preprocessing, compile, assembling)
uart.o: uart.c
	gcc -c uart.c

# linking
all: uart.o
	gcc -o uart uart.o 
	./uart

run:
	./uart

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
	rm -rf uart
endif

