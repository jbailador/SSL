#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int getLength(const char* cadena) {
    if (*cadena == '\0') return 0;
    return 1 + getLength(cadena + 1);
}

bool isEmpty(const char *cadena) {
    return cadena[0] == '\0'; 
}

bool areDecimalDigits(const char* cadena) {
    if (cadena[0] == '\0') 
        return false;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] < '0' || cadena[i] > '9') 
            return false;
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

    for(; *cadena != '\0'; cadena++) {
        if(*cadena == caracter) return true;
    }
    return false;
}

bool areEqual(const char* cadena1, const char* cadena2) {
    if (*cadena1 == '\0' && *cadena2 == '\0') return true;
    if (*cadena1 != *cadena2) return false;
    return areEqual(cadena1 + 1, cadena2 + 1);
}
    
char* concatenate(char* cadena1, char* cadena2){
    int total = getLength(cadena1)+getLength(cadena2);
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

char* power(char* cadena1, int potencia) {
    int len = getLength(cadena1);
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

char* toUpper(char* cadena1){
    for (int i = 0; i < getLength(cadena1); i++)
    {
        if(cadena1[i]>=97 && cadena1[i]<=122)
            cadena1[i] -= 32;
    }
    return cadena1;
}