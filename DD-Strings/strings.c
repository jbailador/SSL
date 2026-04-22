#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int getLength(char* cadena){
    int cont = 0;
    for (int i = 0; cadena[i] != '\0' ; i++)
    {
       cont++;        
    }
    return cont;
}

bool isEmpty(char *cadena) {
    return getLength(cadena) == 0 ? true : false;
}

bool areDecimalDigits(char* cadena) {
    int contInt = 0;
    int longitud = getLength(cadena);
    bool resultado = false;
    for(int i = 0; i < longitud; i++) {
        if(cadena[i] >= 48 && cadena[i] <= 57) {
            contInt++;
        }
    }
    if(contInt == longitud) {
        resultado = true;
    }
    return resultado;
}
    
int toInteger(char* cadena) {
    
    return atoi(cadena);
}

bool contains(char* cadena, char caracter) {

    for(int i = 0; i < getLength(cadena); i++) {
        if(cadena[i] == caracter) {
            return true;
        }
    }

    return false;
}

bool areEqual(char* cadena1, char* cadena2){
   
    if(getLength(cadena1)!=getLength(cadena2)){
        return false;
    }else {
         for (int i = 0; i < getLength(cadena1); i++)
    {
        if (cadena1[i]!=cadena2[i])
        {
            return false;
        }
        
    }
}
    
return true;
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