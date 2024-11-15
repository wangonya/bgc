#include <stdio.h>

struct foo
{
    int a;
    int b;
    int c;
    char d;
};

int main(void)
{
    printf("%zu\n", sizeof(int) + sizeof(char) + sizeof(int) + sizeof(char));
    printf("%zu\n", sizeof(struct foo));
}

// if we needed to know where the padding bytes were, we can measure it with offsetof, defined in <stddef.h>