#include <stdio.h>

extern char **environ; // MUST be extern and named "environ"

int main(void)
{
    for (char **p = environ; *p != NULL; p++)
        printf("%s\n", *p);
}