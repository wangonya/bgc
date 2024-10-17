#include <stdio.h>

int main(void)
{
    float f[4]; // declare an array of 4 floats

    f[0] = 3.14;
    f[1] = 1.4;
    f[2] = 1.6;
    f[3] = 2.7;

    for (int i = 0; i < 4; i++)
    {
        printf("%f\n", f[i]);
    }

    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof a / sizeof(int); i++)
    /* This trick only works in the scope in which the array was defined.
     If you pass the array to a function, it doesn’t work.
     This is because when you “pass” arrays to functions,
     you’re only passing a pointer to the first element, and that’s what sizeof measures.
    */
    {
        printf("%d\n", a[i]);
    }

    int a1[10] = {0, 11, 22, [5] = 55, 66, 77};
    // 0 11 22 0 0 55 66 77 0 0

    int a2[3] = {22, 37, 3490};

    // is the same as:

    int a3[] = {22, 37, 3490}; // Left the size off!

    for (int i = 0; i < 10; i++)
    { // BAD NEWS: printing too many elements!
        printf("%d\n", a[i]);
    }
}