int GetLength(const char* cadena);
## Descrición
Cuenta los caracteres de una cadena de manera recursiva hasta llegar a '\0'.
## Parámetros
Recibe un puntero a un arreglo de caracteres.
## Retorno
Retorna la cantidad de caracteres de una cadena menos el '\0'.

int ToInteger(const char* cadena);
## Descripción
Convierte un número decimal expresado como un arreglo de caracteres en su equivalente de tipo int.
## Parámetros
Recibe un puntero a un arreglo de caracteres numéricos.
## Retorno
Retorna el equivalente de tipo entero a la cadena ingresada.

bool AreEqual(const char* cadena1, const char* cadena2);
## Descripción
Compara que dos arreglos contengan la misma secuencia de caracteres.
## Parámetros
Recibe dos punteros a los arreglos a comparar.
## Retorno
Retorna 1 si los arreglos ingresados contienen la misma secuencia de caracteres y 0 si no es así.

bool AreDecimalDigits(const char* cadena);
## Descripción
Revisa que todos los caracteres de un arreglo representen números decimales.
## Parámetros
Recibe un puntero a un arreglo de caracteres.
## Retorno
Retorna 1 si el arreglo ingresado solo contiene caracteres númericos entre el '0' y el '1', y 0 si no es así.

bool Contains(const char* cadena, char caracter);
## Descripción
Revisa que un arreglo de caracteres contenga un caracter específico ingresado como parámetro.
## Parámetros
Recibe un puntero a un arreglo de caracteres y un caracter a buscar en el arreglo.
## Retorno
Retorna 1 si el arreglo ingresado contiene al caracter solicitado y 0 si no es así.

bool IsEmpty (const char* cadena);
## Descripción
Revisa que un arreglo de caracteres esté vacío.
## Parámetros
Recibe un puntero a un arreglo de caracteres.
## Retorno
Retorna 1 si el arreglo ingresado está vacío y 0 si no es así.

bool StartsWith(const char* cadena, const char* palabra);
## Descripción
Revisa que un arreglo de caracteres comience con otro ingresado como parámetro.
## Parámetros
Recibe dos punteros a arreglos de caracteres, el primero debe contener al último al inicio.
## Retorno
Retorna 1 si el primer arreglo ingresado contiene en su inicio al segundo y 0 si no es así.

char* Concatenate(const char* cadena1, const char* cadena2);
## Descripción
Concatena dos arreglos de caracteres, poniendo el primero al inicio y el segundo al final.
## Parámetros
Recibe dos punteros a arreglos de caracteres.
## Retorno
Retorna un nuevo arreglo de caracteres que contiene en su inicio al primero ingresado y, al final, al segundo. En caso de fallar la reserva de memoria devuelve NULL.

char* Power(const char* cadena1, int potencia);
## Descripción
Repite un arreglo de caracteres una cantidad de veces ingresada por parámetro.
## Parámetros
Recibe un puntero a un arreglo de caracteres y un entero que indica la cantidad de veces que debe repetirse.
## Retorno
Retorna un nuevo arreglo de caracteres que contiene al ingresado la cantidad de veces solicitada. En caso de fallar la reserva de memoria devuelve NULL.

char* ToUpper( char* cadena1);
## Descripción
Convierte un arreglo de caracteres formado por letras minúsculas del alfabeto en su equivalente en letras mayúsculas.
## Parámetros
Recibe un arreglo de caracteres.
## Retorno
Retorna un puntero al mismo arreglo de caracteres pero modificado para ser equivalente al ingresado, en letras mayúsculas.