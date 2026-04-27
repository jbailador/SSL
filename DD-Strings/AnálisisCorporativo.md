## Análisis Comparativo del String en Lenguajes de Programación  
  
### C vs Python  
  
#### 1. ¿El tipo es parte del lenguaje en algún nivel?  
  
C: No existe un tipo de dato string. Se maneja mediante un arreglo de caracteres (char[]) o un puntero a carácter (char*).  
  
Python: Es un tipo de dato nativo y fundamental llamado str. Está integrado directamente en el núcleo del lenguaje.  
  
#### 2. ¿El tipo es parte de la biblioteca?  
C: Sí, casi toda la funcionalidad está en la biblioteca estándar <string.h>, que provee funciones para manipular esos arreglos de bytes (como strlen, strcpy).  
  
Python: Sí, pero como un objeto. El tipo str tiene sus propios métodos integrados (ej: .split(), .upper()), aunque existen bibliotecas adicionales (como re para expresiones regulares).  
  
#### 3. Alfabeto y Codificación  
C: Tradicionalmente usa ASCII (cada char es 1 byte). No tiene noción nativa de caracteres multibyte, aunque existen extensiones como wchar_t, pero no son el estándar común.  

Python: Utiliza Unicode de forma nativa en todas sus cadenas. Esto permite representar caracteres de casi cualquier idioma del mundo sin configuración extra.  
  
#### 4. Alocación de Memoria  
C: La alocación puede ser estática (en el segmento de datos), automática (en el stack) o dinámica (en el heap usando malloc). Se requiere el uso de free() para evitar fugas de memoria. El programador es responsable de liberar la memoria.  
  
Python: La alocación es siempre dinámica y automática. Python utiliza un Garbage Collector (recolector de basura) que libera la memoria cuando el objeto ya no tiene referencias.  
  
#### 5. Mutabilidad  
C: Son mutables. Podés cambiar un carácter específico de un arreglo en cualquier momento (ej: cadena[0] = 'H';). Sin embargo, los punteros que apuntan a literales de cadena suelen residir en memoria de solo lectura.   
  
Python: Son inmutables. Una vez que se crea un string, no se puede modificar. Cualquier operación que "cambie" el string (como concatenar) en realidad crea un objeto nuevo en memoria.

#### 6. ¿Es un First Class Citizen?  
C: No. No se pueden asignar arreglos directamente con =, no se pueden comparar con == (hay que usar strcmp) y tienen restricciones para ser retornados.  
  
Python: Sí. Se pueden pasar como argumentos, retornar, asignar a variables y comparar con operadores lógicos de forma directa, igual que un entero o un booleano.  
  
#### 7. Mecánica de Pasaje como Argumento y Retorno  
C:  
  
Pasaje: Se pasa por referencia (se envía el puntero a la primera posición de memoria). Cualquier cambio dentro de la función afecta al original si es un arreglo.  
  
Retorno: No se puede retornar un arreglo local. Hay que retornar un puntero a memoria dinámica (malloc) o recibir un buffer como parámetro.   
  
Python:  
  
Pasaje: Se pasa por asignación de objeto (similar a referencia). Sin embargo, como es inmutable, la función no puede modificar el string original del llamador.  
  
Retorno:Se retorna la referencia al objeto de forma directa y sencilla.  
  
#### 8. Soporte para ASCII, Unicode y UTF-8  
C: Soporte nativo limitado a ASCII. El soporte para UTF-8 es manual: el programador debe entender que un "carácter" visual puede ocupar varios bytes en memoria.  
  
Python: Soporte total y transparente. Todas las cadenas son Unicode. La conversión a formatos de transporte como UTF-8 se gestiona mediante los métodos .encode() y .decode().  