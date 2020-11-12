CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS=-Wall -g

all: mymaths mymathd libmyMath.so libmyMath.a	
mymaths: libmyMath.a main.o
	$(CC) $(FLAGS) -o mymaths main.o libmyMath.a
mymathd: libmyMath.so main.o
	$(CC) $(FLAGS) -o mymathd main.o ./libmyMath.so
mains: mymaths main.o
	$(CC) $(FLAGS) main.o mymaths -o main
maind: mymathd main.o
	$(CC) $(FLAGS) main.o mymathd -o main
libmyMath.so: power.o basicMath.o
	$(CC) -shared -o libmyMath.so power.o basicMath.o
libmyMath.a: power.o basicMath.o
	$(AR) -rcs libmyMath.a power.o basicMath.o
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c -o basicMath.o
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c  -o power.o
main.o: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c -o main.o

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mymaths mymathd
