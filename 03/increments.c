#include <stdio.h>

int main(void)
{
    int i;
    int j;

    i = 10, j = 20;
    printf("i=%d, j=%d\n", i, j);
    j = 5 + i++; // compute 5+i, _then_ increment i
    i = 5 + ++j; // increment j, _then_ compute 5+j
    printf("i=%d, j=%d\n", i, j);

    for (i = 0; i < 3; i++)
        printf("for loop post-increment i is %d\n", i);

    for (i = 0; i < 3; ++i)
        printf("for loop pre-increment i is %d\n", i);

    /*
    https://stackoverflow.com/a/4706225/9312256

    After evaluating i++ or ++i, the new value of i will be the same in both cases. The difference between pre- and post-increment is in the result of evaluating the expression itself.

    ++i increments i and evaluates to the new value of i.

    i++ evaluates to the old value of i, and increments i.

    The reason this doesn't matter in a for loop is that the flow of control works roughly like this:

        1. test the condition
        2. if it is false, terminate
        3. if it is true, execute the body
        4. execute the incrementation step

    Because (1) and (4) are decoupled, either pre- or post-increment can be used.
    */
}