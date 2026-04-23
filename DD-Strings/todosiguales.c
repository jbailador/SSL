#include "string.c"
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cont = 0;
    for (int i = 0; i < argc-1; i++)
    {
        if (i!=0)
        {
            if(areEqual(argv[i], argv[i+1])){
                cont++;
            }

        }
        
    }

    if (cont==argc-2)
    {
        printf("Son todos iguales");
    }else{
        printf("No son todos iguales");

    }
    
    
    return 0;
}
