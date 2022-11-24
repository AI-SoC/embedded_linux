# compile (preprocessing, compile, assembling)
create.o: create.c
	gcc -c create.c

search.o: search.c
	gcc -c search.c

update.o: update.c
	gcc -c update.c

# linking
all: create.o search.o update.o
	gcc -o cr create.o 
	gcc -o se search.o 
	gcc -o up update.o

	./cr data.txt 
	./se data.txt
	./up data.txt
	./se data.txt

run:
	./cr data.txt 
	./se data.txt
	./up data.txt
	./se data.txt

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
	rm -rf cr se up data.txt
endif

	

