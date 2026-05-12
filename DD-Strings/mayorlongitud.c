#include <stdio.h>
#include "String.h"

int main(int argc, char *argv[]) {
    
    if (argc < 2) return 0;
    
 
    char *mayor = *(argv + 1);
    int maxLen = GetLength(mayor);
    

    for (char **p = argv + 2; *p != NULL; p++) {
        
        int actualLen = GetLength(*p); 
        
    
        if (actualLen > maxLen) {
            maxLen = actualLen; 
            mayor = *p;         
        }
    }
    
    
    printf("%s\n", mayor);
    
    return 0;
}