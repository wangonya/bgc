#include <stdio.h>

int main(void)
{
    char s[10];
    float f = 3.142;

    // convert "f" to a string, storing in "s", writing at most 10 characters
    // including the NUL terminator

    snprintf(s, 10, "%f", f);
    printf("String value: %s\n", s); // String value: 3.142000

    char s2[2];
    int i = 1;
    snprintf(s2, 2, "%d", i);
    printf("String value: %s\n", s2); // String value: 3.142000
}