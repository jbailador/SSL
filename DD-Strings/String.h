#ifndef STRING_H
#define STRING_H

/*
 * Pre: 'cadena' debe ser un puntero válido y terminar en el carácter nulo '\0'.
 * Post: Devuelve la cantidad de caracteres de la cadena, sin contar el terminador nulo.
 */
int GetLength(const char* cadena);

/*
 * Pre: 'cadena' no debe ser NULL y debe representar un número entero válido (opcionalmente con signo).
 * Post: Devuelve la representación entera de la cadena. Si el formato es inválido, el comportamiento es indefinido.
 */
int ToInteger(const char* cadena);

/*
 * Pre: Ambos punteros deben ser válidos y las cadenas terminar en '\0'.
 * Post: Devuelve true si ambas cadenas tienen la misma longitud y los mismos caracteres en las mismas posiciones.
 */
bool AreEqual(const char* cadena1, const char* cadena2);

/*
 * Pre: 'cadena' debe ser un puntero válido.
 * Post: Devuelve true si todos los caracteres de la cadena son dígitos (0-9). Si la cadena está vacía, devuelve false.
 */
bool AreDecimalDigits(const char* cadena);

/*
 * Pre: 'cadena' debe ser un puntero válido.
 * Post: Devuelve true si el carácter 'caracter' se encuentra al menos una vez dentro de la cadena.
 */
bool Contains(const char* cadena, char caracter);

/*
 Pre: 'cadena' debe ser un puntero válido.
 Post: Devuelve true si el primer carácter de la cadena es el terminador nulo ('\0').
 */
bool IsEmpty(const char* cadena);

/*
 Pre: Ambos punteros deben ser válidos.
 Post: Devuelve true si 'cadena' comienza exactamente con la secuencia de caracteres contenida en 'palabra'.
 */
bool StartsWith(const char* cadena, const char* palabra);

/*
 Pre: Ambas cadenas deben ser válidos punteros terminados en '\0'.
 Post: Devuelve un nuevo puntero a una cadena en memoria dinámica que contiene la unión de cadena1 y cadena2. 
 */
char* Concatenate(const char* cadena1, const char* cadena2);

/*
 Pre: 'cadena1' es válida y 'potencia' es un entero no negativo (>= 0).
 Post: Devuelve una nueva cadena en memoria dinámica que consiste en repetir 'cadena1' n veces (potencia).
 */
char* Power(const char* cadena1, int potencia);

/*
 Pre: 'cadena1' debe ser un puntero a una zona de memoria modificable y terminar en '\0'.
 Post: Transforma cada carácter alfabético en minúscula de la cadena original a su equivalente en mayúscula. 
 */
char* ToUpper(char* cadena1);

#endif
