#include <stdio.h>
#include "String.h"

int main(int argc, char* argv[]) {
    (void)argc; 
    int resultado = 0;

    for (char **p = argv + 1;*p != NULL; p++) {
        
        if(AreDecimalDigits(*p)) {
            resultado += ToInteger(*p);
        }
    }
    printf("Resultado de la suma: %d", resultado);

    return 0;
}
