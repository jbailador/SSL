#include <stdio.h>
#include "String.h"

int main(int argc, char argv[]) {
    (void)argc; 

    int iguales = 1; 

    for (char **p = argv + 1;*p != NULL && *(p + 1) != NULL; p++) {

        if (!AreEqual(*p, *(p + 1))) {
            iguales = 0;
            break;
        }
    }
    printf("%d\n", iguales);

    return 0;
}
