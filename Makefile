CC = g++
FLAGS = -Wall -Wextra -Werror
EXEC = a.out

all: side.o cube.o rubiks.o
	$(CC) $(FLAGS) side.o cube.o rubiks.o -o $(EXEC)

%.o: %.cpp
	$(CC) -c $(FLAGS) $^

.PHONY clean:
	rm -rf *.o $(EXEC)