#ifndef STRING_H 
#define STRING_H
#include <stdbool.h>

int getLength(const char* cadena);
int toInteger(const char* cadena);
bool areEqual(const char* cadena1, const char* cadena2);
bool areDecimalDigits(const char* cadena);
bool contains(const char* cadena, char caracter);
bool isEmpty (const char *cadena);

char* concatenate(const char* cadena1, const char* cadena2);
char* power(const char* cadena1, int potencia);
char* toUpper( char* cadena1);

#endif