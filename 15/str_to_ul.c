#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "3490";

    // convert string s, a number in base 10, to undigned long int.
    // NULL means we don't care to learn about any error info.

    unsigned long int x = strtoul(s, NULL, 10);
    printf("%lu\n", x); // 3490

    char *s2 = "101010";

    // convert string s, a number in base 2, to an unsigned long int.

    unsigned long int x2 = strtoul(s2, NULL, 2);
    printf("%lu\n", x2); // 42

    char *s3 = "34x90"; // x is not a valid digit in base 10!
    char *badchar;

    unsigned long int x3 = strtoul(s3, &badchar, 10);

    // it tries to convert as much as possible, so it gets this far:
    printf("%lu\n", x); // 34
    // NOTE: the book says it should only get as far as 34 but it actually prints 3490 for me

    // but we can see the offending bad character because badchar points to it!
    printf("Invalid character: %c\n", *badchar); // "x"
    // if nothing goes wrong, badchar points to the NUL terminator at the end of the string
}