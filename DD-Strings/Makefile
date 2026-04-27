# Variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Target principal (Parte III)
all: enlineas longitudes mayorlongitud todosiguales suma

# Target de Pruebas (Parte II)
test: String.c StringTest.c
	$(CC) $(CFLAGS) String.c StringTest.c -o StringTest
	./StringTest
	@echo "Todos los tests pasaron exitosamente."
	@rm StringTest

# Regla genérica para los programas de la Parte III
%: %.c String.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f enlineas longitudes mayorlongitud todosiguales suma StringTest