#include <stdio.h>

int shared = 10; // File / global scope! Visible to the whole file after this!

int main(void)
{
    int a = 12; // local to outer block, but visiblke in inner block

    if (a == 12)
    {
        int b = 99;              // local to inner block, not visible in outer block
        printf("%d %d\n", a, b); // ok: 12 99
    }

    printf("%d\n", a); // ok, we're still in a's scope
    printf("%d\n", b); // illegal, out of b's scope
}