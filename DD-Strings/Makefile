CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c23 

.PHONY: clean run test

prog: stringTest.o String.o
	$(CC) stringTest.o String.o -o prog

stringTest.o: stringTest.c String.h
	$(CC) $(CFLAGS) stringTest.c -o stringTest.o

String.o: String.c String.h
	$(CC) $(CFLAGS) $< -o $@

test: prog
	.\prog.exe

clean:
	rm stringTest.o String.o prog.exe

run: prog
	.\prog.exe