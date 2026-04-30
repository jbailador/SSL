#include "String.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int GetLength(const char* cadena) {
    if (*cadena == '\0') return 0;
    return 1 + GetLength(cadena + 1);
}

bool IsEmpty(const char *cadena) {
    return cadena[0] == '\0'; 
}

bool AreDecimalDigits(const char* cadena) {
    if (cadena[0] == '\0') 
        return false;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] < '0' || cadena[i] > '9') 
            return false;
    }
    return true; 
}

int ToInteger(const char* cadena) {
    int resultado = 0;
    for (int i = 0; cadena [i] != '\0'; i++)
    {
        resultado = (resultado * 10) + (cadena[i] - '0');
    }
    return resultado;
}

bool Contains(const char* cadena, char caracter) {

    for(; *cadena != '\0'; cadena++) {
        if(*cadena == caracter) return true;
    }
    return false;
}

bool AreEqual(const char* cadena1, const char* cadena2) {
    if (*cadena1 == '\0' && *cadena2 == '\0') return true;
    if (*cadena1 != *cadena2) return false;
    return AreEqual(cadena1 + 1, cadena2 + 1);
}
    
char* Concatenate(const char* cadena1, const char* cadena2){
    int total = GetLength(cadena1)+GetLength(cadena2);
    char* cadenaConcatenada = (char*)malloc(total+1);

    if(cadenaConcatenada == NULL) return NULL;
    char* p = cadenaConcatenada;

    //Copiamos la primera cadena
    for (; *cadena1 != '\0'; cadena1++, p++){
        *p = *cadena1;
    }
    //Copiamos la segunda
    for (; *cadena2 != '\0'; cadena2++, p++){
        *p = *cadena2;
    }

    *p = '\0';
    return cadenaConcatenada;
}

//Operacion libre: StartsWith
bool StartsWith(const char* cadena, const char* palabra) {
    for (const char *c = cadena, *p = palabra; *p != '\0'; c++, p++) {
        
        if (*c == '\0' || *c != *p) {
            return false;
        }
    }
    return true;
}

char* Power(const char* cadena1, int potencia) {
    int len = GetLength(cadena1);
    char* nuevo = (char*)malloc((len * potencia) + 1);

    if(nuevo == NULL) return NULL;

    char* p = nuevo;
    for(int i = 0; i < potencia; i++) {
        const char* temp = cadena1; //puntero temporal para no perder inicio de cadena1
        for (; *temp != '\0'; temp++, p++)
        {
            *p = *temp;
        } 
    }
    *p = '\0'; 
    return nuevo;
}

//Operacion libre: ToUpper
char* ToUpper(char* cadena1){
    for (int i = 0; cadena1[i] != '\0'; i++)
    {
        if(cadena1[i] >= 'a' && cadena1[i] <= 'z')
            cadena1[i] -= 32;
    }
    return cadena1;
}

//Operacion libre: startsWith
bool startsWith(const char* cadena, const char* palabra) {
    for (const char *c = cadena, *p = palabra; *p != '\0'; c++, p++) {
        
        if (*c == '\0' || *c != *p) {
            return false;
        }
    }
    return true;
}