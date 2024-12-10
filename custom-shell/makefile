CC = gcc
CFLAGS = -Wall -Wextra -g
OBJ = main.o parser.o executor.o

all: custom_shell

custom_shell: $(OBJ)
	$(CC) $(CFLAGS) -o custom_shell $(OBJ)

main.o: main.c parser.h executor.h
	$(CC) $(CFLAGS) -c main.c

parser.o: parser.c parser.h
	$(CC) $(CFLAGS) -c parser.c

executor.o: executor.c executor.h
	$(CC) $(CFLAGS) -c executor.c

clean:
	rm -f *.o custom_shell
