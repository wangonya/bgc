#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int result = 0;

    for (int i = 1; i < argc; i++)
        result += atoi(argv[i]); // strtol for better error handling

    printf("%d\n", result);
}