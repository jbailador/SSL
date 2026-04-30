#ifndef STRING_H 
#define STRING_H
#include <stdbool.h>

int GetLength(const char* cadena);
int ToInteger(const char* cadena);
bool AreEqual(const char* cadena1, const char* cadena2);
bool AreDecimalDigits(const char* cadena);
bool Contains(const char* cadena, char caracter);
bool IsEmpty (const char *cadena);
bool StartsWith(const char* cadena, const char* palabra);
char* Concatenate(const char* cadena1, const char* cadena2);
char* Power(const char* cadena1, int potencia);
char* ToUpper( char* cadena1);

#endif