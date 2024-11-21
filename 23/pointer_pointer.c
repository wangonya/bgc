#include <stdio.h>

int main(void)
{
    int x = 3490; // int
    int *p = &x;  // pointer to int
    int **q = &p; // pointer to pointer to int

    printf("%d %d\n", *p, **q);
}

/*
Variable	Stored at Address	Value Stored There
x	        28350	            3490—the value from the code
p	        29122	            28350—the address of x!
q	        30840	            29122—the address of p!
*/