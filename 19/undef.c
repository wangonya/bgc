#include <stdio.h>

int main(void)
{
#define GOATS

#ifdef GOATS
    printf("Goats detected!");
#endif

#undef GOATS

#ifdef GOATS
    printf("Goats detected, again!");
#endif
}