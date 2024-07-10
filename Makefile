all: bin/dog

clear: 
	rm -f bin/* build/*

CFLAG= -g -Wall -Wextra -Wpedantic -Wconversion

INCLUDES= src/*.h

COMMON_DEPS= $(INCLUDES) Makefile

build/%.o: src/%.c $(COMMON_DEPS)
	$(CC) $(CFLAG) -c $< -o $@

bin/dog: build/main.o build/flagsControll.o build/errorHandler.o build/printing.o $(COMMON_DEPS)
	$(CC) -o bin/dog build/main.o build/flagsControll.o build/errorHandler.o build/printing.o
