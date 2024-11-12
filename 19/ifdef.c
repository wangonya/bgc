#include <stdio.h>

#define EXTRA_HAPPY

int main(void)
{
#ifdef EXTRA_HAPPY
    printf("I'm extra happy!\n");
#endif

#ifndef EXTRA_HAPY
    printf("I'm just regular!\n");
#endif

    printf("OK!\n");
}

// #ifdef EXTRA_HAPPY
//     printf("I'm extra happy!\n");
// #else
//     printf("I'm just regular\n");
// #endif

// #ifdef MODE_1
//     printf("This is mode 1\n");
// #elifdef MODE_2
//     printf("This is mode 2\n");
// #elifdef MODE_3
//     printf("This is mode 3\n");
// #else
//     printf("This is some other mode\n");
// #endif

// On the flipside, you can use #elifndef for “else if not defined”.
