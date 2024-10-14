/* Lots of things in C are easier to understand if you know that
the parameter is a copy of the argument, not the argument itself. */

#include <stdio.h>

int plus_one(int n)
{
    return n + 1;
}

int main(void)
{
    int i = 10, j;
    j = plus_one(i);
    printf("i + 1 = %d\n", j);
}

// This function takes no arguments and returns no value:

void hello(void)
{
    printf("Hello, world!\n");
}

int main(void)
{
    hello(); // Prints "Hello, world!"
}