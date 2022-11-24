incr.o: incr.c
	# -fPIC 옵션을 주면 shared 라이브러리로 만들 수 있음
	# static 라이브러리와 다른점은
	# static은 로딩 시 incr()라는 함수가 무조건 메모리에 올라가는데
	# sahred는 호출 될 때에 incr()이 메모리로 올라감 
	gcc -fPIC -c incr.c

decr.o: decr.c
	gcc -fPIC -c decr.c

main.o: main.c
	gcc -c main.c

# shared lib
libfoo.so: incr.o decr.o
	gcc -shared -o libfoo.so incr.o decr.o

# shared lib을 사용해서 실행이 잘되게 하려면
# $LD_LIBRARY_PATH 환경변수를 설정해야 한다.
# ex) export LD_LIBRARY_PATH=[dir location]
all: main.o libfoo.so
	gcc main.o -L. -lfoo -o main
	./main