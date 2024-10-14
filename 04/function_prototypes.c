#include <stdio.h>

int foo(void); // prototype

/* Always use void to indicate that a function takes no parameters.
Leaving void out of the prototype indicates to the compiler that there is no additional information about the parameters to the function.
It effectively turns off all that type checking.
With a prototype definitely use void when you have an empty parameter list.
*/

int main(void)
{
    int i;

    // We can call foo() here before it's definition because the
    // prototype has already been declared, above!

    i = foo();
    printf("%d\n", i);
}

int foo(void)
{
    return 3490;
}