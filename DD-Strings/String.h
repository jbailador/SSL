#ifndef STRING_H 
#define STRING_H
#include <stdbool.h>

int getLength(char* cadena);
int toInteger(char* cadena);
bool areEqual(char* cadena1, char* cadena2);
bool areDecimalDigits(char* cadena);
bool contains(char* cadena, char caracter);
bool isEmpty (char *cadena);

char* concatenate(char* cadena1, char* cadena2);
char* power(char* cadena1, int potencia);
char* toUpper(char* cadena1);

#endif