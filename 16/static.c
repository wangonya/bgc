#include <stdio.h>

void counter(void)
{
    static int count; // static block scope variables are initialized to 0 by default
    count++;
    printf("This has been called %d time(s)\n", count);
}

int main(void)
{
    counter();
    counter();
    counter();
}
