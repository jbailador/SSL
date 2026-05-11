CC = gcc
CFLAGS = -g -Wall -c -pedantic-errors -std=c23 

PROG1 = stringTest
PROG2 = suma
PROG3 = mayorlongitud
PROG4 = longitudes
PROG5 = enlineas
PROG6 = todosiguales

.PHONY: clean run test

all: $(PROG1) $(PROG2) $(PROG3) $(PROG4) $(PROG5) $(PROG6) $(PROG7)

$(PROG1): stringTest.o String.o
	$(CC) stringTest.o String.o -o $(PROG1)

$(PROG6): todosiguales.o String.o
	$(CC) todosiguales.o String.o -o $(PROG6)

$(PROG5): enlineas.o String.o
	$(CC) enlineas.o String.o -o $(PROG5)

$(PROG4): longitudes.o String.o
	$(CC) longitudes.o String.o -o $(PROG4)

$(PROG3): mayorlongitud.o String.o
	$(CC) mayorlongitud.o String.o -o $(PROG3)

$(PROG2): suma.o String.o
	$(CC) suma.o String.o -o $(PROG2)

suma.o: suma.c String.c
	$(CC) $(CFLAGS) suma.c -o suma.o

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
