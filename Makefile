CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

SRC = src/main.c src/shell.c

OBJ = obj/main.o obj/shell.o

TARGET = bin/lsh

all: $(TARGET)

$(TARGET): $(OBJ)
	mkdir -p bin
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

obj/main.o: src/main.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

obj/shell.o: src/shell.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c src/shell.c -o obj/shell.o

clean:
	rm -f obj/*.o $(TARGET)