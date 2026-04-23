#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int getLength(const char* cadena) {
    if (*cadena == '\0') {
        return 0;
    }
    return 1 + getLength(cadena + 1);
}

bool isEmpty(const char *cadena) {
    return cadena[0] == '\0'; 
}

bool areDecimalDigits(const char* cadena) {
    if (cadena[0] == '\0') {
        return false;
    }
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] < '0' || cadena[i] > '9') {
            return false;
        }
    }
    return true; 
}

int toInteger(char* cadena) {
    int resultado = 0;
    for (int i = 0; cadena [i] != '\0'; i++)
    {
        resultado = (resultado * 10) + (cadena[i] - '0');
    }
    return resultado;
}

bool contains(char* cadena, char caracter) {

    for(int i = 0; i != '\0'; i++) {
        if(cadena[i] == caracter) {
            return true;
        }
    }
    return false;
}

bool areEqual(const char* cadena1, const char* cadena2) {
    if (*cadena1 == '\0' && *cadena2 == '\0') {
        return true;
    }
    
    if (*cadena1 != *cadena2) {
        return false;
    }
    
    return areEqual(cadena1 + 1, cadena2 + 1);
}
    
char* concatenate(char* cadena1, char* cadena2){
    int total = getLength(cadena1)+getLength(cadena2);
    char* cadenaConcatenada = malloc(total+1);
    int j = 0, i = 0;

    for (i = 0; i < getLength(cadena1) ; i++){
                
        cadenaConcatenada[i] = cadena1[i];

    }
    for (j = 0; j < getLength(cadena2) ; j++){
                
        cadenaConcatenada[i + j] = cadena2[j];
    }

    return cadenaConcatenada;
}

char* power(char* cadena1, int potencia) {
    int total = getLength(cadena1) * potencia;
    char* resultado = malloc(total+1);
    for(int i = 0; i < potencia; i++) {
        resultado = concatenate(cadena1, cadena1);
    }
}

char* toUpper(char* cadena1){
    for (int i = 0; i < getLength(cadena1); i++)
    {
        if(cadena1[i]>=97 && cadena1[i]<=122){
            cadena1[i] -= 32;
        }
    }
    return cadena1;
}