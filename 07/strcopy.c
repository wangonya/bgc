#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "Hello, world!";
    char t[100]; // each char is 1 byte, so plenty of room

    // this makes a copy of the string
    strcpy(t, s);

    // modify t
    t[0] = 'z';

    // s remains unaffected
    printf("s is %s\n", s);

    // t has changed
    printf("t is %s\n", t);
}