#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "Hello World!"; // char s[] would also work

    for (int i = 0; i < strlen(s); i++)
        printf("%c\n", s[i]);
}

// strings defined with * are immutable
// [] types are mutable