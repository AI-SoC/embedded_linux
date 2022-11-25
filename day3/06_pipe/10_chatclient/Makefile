# compile (preprocessing, compile, assembling)
chatclient.o: chatclient.c
	gcc -c chatclient.c

# linking
all: chatclient.o
	gcc -o chatclient chatclient.o 
	./chatclient

run:
	./chatclient

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
	rm -rf chatclient
endif

