#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int cats[100];

    int *f = cats + 20;
    int *g = cats + 60;

    // difference without ptrdiff_t is implementation defined
    // ptrdiff_t makes it portable
    ptrdiff_t d = g - f;

    printf("%td\n", d); // Print decimal: 40
    printf("%tX\n", d); // Print hex:     28
}