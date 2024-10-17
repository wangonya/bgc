#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p;

    p = a; // same as p=&a[0]
           // p points to the first element of the array

    printf("%d\n", *p); // prints 1
}