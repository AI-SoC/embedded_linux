# compile (preprocessing, compile, assembling)
chatserver.o: chatserver.c
	gcc -c chatserver.c

# linking
all: chatserver.o
	gcc -o chatserver chatserver.o 
	./chatserver &

run:
	./chatserver &

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
	rm -rf chatserver chatfifo1 chatfifo2
endif

