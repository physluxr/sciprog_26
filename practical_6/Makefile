CC = gcc
CFLAGS = -Wall

all: practical6

practical6: main.o matmult.o
	$(CC) -o practical6 main.o matmult.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c

clean:
	rm -f *.o practical6

