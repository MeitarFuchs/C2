CC=gcc
AR=ar
OBJECT_BANK = myBank.o
FLAGS= -Wall -g

all:libmyBank.a main.o
	$(CC) $(FLAGS) -o all main.o ./libmyBank.a
libmyBank.a : myBank.o 
	$(CC) -shared -o libmyBank.a myBank.o
myBank.o : myBank.c myBank.h
	$(CC) $(FLAGS) -fPIC -c myBank.c
main.o : main.c myBank.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean: 
		rm -f *.o *.a all
