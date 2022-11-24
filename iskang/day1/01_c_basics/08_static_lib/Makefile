incr.o: incr.c
	gcc -c incr.c
decr.o: decr.c
	gcc -c decr.c
main.o: main.c
	gcc -c main.c

libf.a: incr.o decr.o
	ar rc libf.a incr.o decr.o
	# 아카이브화
	ranlib libf.a
	# 라이브러리 인덱싱(양이 많아지므로)

all: main.o libf.a
	gcc main.o -L. -lf -o main
	# -L/usr/lib처럼 경로 지정 가능
	# -l 뒤의 XXX == libXXX 참조하겟다는 뜻
