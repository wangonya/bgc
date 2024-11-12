#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int total = 0;

    // trick to get the compiler to stop warning about the
    // unused variable argc:
    // (void)argc;

    for (char **p = argv + 1; *p != NULL; p++)
        total += atoi(*p);

    printf("%d\n", total);
}