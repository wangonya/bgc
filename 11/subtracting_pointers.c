#include <stdio.h>

/* you can only use pointer subtraction between two
pointers that point to the same array */

int my_strlen(char *s)
{
    // start scanning from the beginning of the string
    char *p = s;

    // scan until we find the NUL character
    while (*p != '\0')
        p++;

    // return the difference in pointers
    return p - s;
}

int main(void)
{
    printf("%d\n", my_strlen("hello!")); // prints 6
}