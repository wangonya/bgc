#include <stdio.h>

int main(void)
{
    int y;
    int x = 11;

    // if x > 10, add 17 to y. Otherwise add 37 to y.
    y += x > 10 ? 17 : 37;
    printf("y = %d", y);
}