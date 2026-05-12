#include "String.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
    (void) argc;
    for (char **p = argv + 1;p != NULL; p++)
    {
        printf ("%d\n", GetLength(*p));
    }
    return 0;
}
