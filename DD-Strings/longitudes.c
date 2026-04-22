#include "strings.c"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    
    for (int i = 0; i < argc; i++)
    {
        if (i!=0)
        {
            char* buffer = argv[i];
            int longitud = getLength(buffer);
            printf("%d\n", longitud);

        }
        
    }
    
    return 0;
}
