#include "String.h"
#include <stdio.h>
int main(int argc, char const argv[])
{
    (void) argc;
    for (char **p = argv + 1;p != NULL; p++)
    {
        printf ("%d\n", getLength(*p));
    }
    return 0;
}
