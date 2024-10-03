#include <stdio.h>
#include <stdbool.h>

void bool_1(void)
{
    int x = 1;
    if (x)
    {
        printf("bool_1 x is true!\n");
    }
}

void bool_2(void)
{
    bool x = true;
    if (x)
    {
        printf("bool_2 x is true!\n");
    }
}

int main(void)
{
    bool_1();
    bool_2();
}

/*
    Operator 	Boolean meaning
    && 	        and
    || 	        or
    ! 	        not
*/