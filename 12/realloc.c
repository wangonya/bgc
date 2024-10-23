#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocate space for 20 floats
    float *p = malloc(sizeof *p * 20); // sizeof *p same as sizeof(float)

    // assign them fractional values 0.0-1.0
    for (int i = 0; i < 20; i++)
        p[i] = i / 20.0;

    // change size to 40 elements
    float *new_p = realloc(p, sizeof *p * 40);

    // check to see if we successfully reallocated
    if (new_p == NULL)
    {
        printf("Error reallocating\n");
        return 1;
    }

    // reassign p
    p = new_p;

    for (int i = 0; i < 40; i++)
        printf("%d: %f\n", i, p[i]);
}