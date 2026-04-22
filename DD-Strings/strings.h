#ifdef STRING_H
#define STRING_H

bool isEmpty (char *cadena);
int getLength(char* cadena);
bool areEqual(char* cadena1, char* cadena2);
bool areDecimalDigits(char* cadena);
bool contains(char* cadena, char caracter);
int toInteger(char* cadena);
char* concatenate(char* cadena1, char* cadena2);
char* power(char* cadena1, int potencia);
char* toUpper(char* cadena1);

#endif /* UTILS_H_ */