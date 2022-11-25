# compile (preprocessing, compile, assembling)
npwriter.o: npwriter.c
	gcc -c npwriter.c

# linking
all: npwriter.o
	gcc -o npwriter npwriter.o 
	./npwriter

run:
	./npwriter

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
	rm -rf npwriter
endif

