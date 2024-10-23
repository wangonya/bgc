#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // allocate space for 10 ints
    int *p = malloc(sizeof(int) * 10);

    // assign them values 0-45
    for (int i = 0; i < 10; i++)
        p[i] = i * 5;

    for (int i = 0; i < 10; i++)
        printf("%d\n", p[i]);

    free(p);
}

/*
This is another allocation function that works similarly to malloc(), with two key differences:

Instead of a single argument, you pass the size of one element, and the number of elements you wish to allocate. It’s like it’s made for allocating arrays.
It clears the memory to zero.
You still use free() to deallocate memory obtained through calloc().

Here’s a comparison of calloc() and malloc().

// Allocate space for 10 ints with calloc(), initialized to 0:
int *p = calloc(10, sizeof(int));

// Allocate space for 10 ints with malloc(), initialized to 0:
int *q = malloc(10 * sizeof(int));
memset(q, 0, 10 * sizeof(int));   // set to 0
Again, the result is the same for both except malloc() doesn’t zero the memory by default.
*/