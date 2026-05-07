#include <stdio.h>
#include "String.h"

int main(int argc, char argv[]) {
    (void)argc; 

    int iguales = 1; 

    for (char **p = argv + 1;p != NULL && (p + 1) != NULL; p++) {

        if (!AreEqual(p, *(p + 1))) {
            igual/es = 0; / ¡Encontró una diferencia! Anota un 0 y deja de buscar.
            break;
        }
    }
    printf("%d\n", iguales);

    return 0;
}
