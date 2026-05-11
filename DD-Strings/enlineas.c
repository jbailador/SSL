#include "Strings.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    (void)argc; 
    for (char **p = argv + 1; *p != NULL; p++) {
        printf("%s\n", *p);
    }
    return 0;
}
