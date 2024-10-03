#include <stdio.h>

int a = 999;

//%zu is the format specifier for type size_t

int main()
{
    printf("sizeof %d is %zu\n", a, sizeof a);
    printf("sizeof int is %zu\n", sizeof(int));
    printf("sizeof char is %zu\n", sizeof(char));
    printf("sizeof float is %zu\n", sizeof(float));
    printf("sizeof &a %p is %zu\n", &a, sizeof(&a));
    printf("sizeof *&a %d is %zu\n", *&a, sizeof(*&a));
}