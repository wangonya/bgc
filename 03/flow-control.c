#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    /* random int between 0 and 19 */
    srand(time(NULL));
    int r = rand() % 20;

    if (r < 10)
    {
        printf("r is less than 10\n");
    }
    else if (r >= 10 && r <= 15)
    {
        printf("r is greater than or equal to 10, but less than 16");
    }
    else
    {
        printf("r is greater than 15, but less than 20");
    }

    while (r < 20)
    {
        printf("r is now %d!\n", r);
        r++;
    }
    printf("All done!\n\n");

    /* With the do-while, the condition is checked after the block of code executes,
    so it always executes at least once. */
    do
    {
        printf("do while: r is %d\n\n", r);
    } while (r < 20);

    /* for (initialize things; loop if this is true; do this after each loop) */
    int i;
    int j;
    for (i = 0, j = 999; i < 10; i++, j--)
    {
        printf("%d, %d\n", i, j);
    }

    /* An empty for will run forever:
    for(;;) {  // "forever"
        printf("I will print this again and again and again\n" );
        printf("for all eternity until the heat-death of the universe.\n");

        printf("Or until you hit CTRL-C.\n");
    }
    */

    int goat_count = i;
    switch (goat_count)
    {
    case 0:
        printf("You have no goats.\n");
        break;

    case 1:
        printf("You have a singular goat.\n");
        break;

    case 2:
        printf("You have a brace of goats.\n");
        break;

    default:
        printf("You have a bona fide plethora of goats!\n");
        break;
    }

    /*
    switch (x) {
    case 1:
        printf("1\n");
        // Fall through!
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
    }

    ProTip: ALWAYS put a comment in the code where you intend to fall through.
    It will save other programmers from wondering if you meant to do that.
    */
}