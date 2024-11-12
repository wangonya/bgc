#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *val = getenv("SHELL");

    if (val == NULL)
    {
        printf("Cannot find SHELL env variable\n");
        return EXIT_FAILURE;
    }

    printf("Value: %s\n", val);
}