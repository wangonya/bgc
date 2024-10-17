#include <stdio.h>

// most common - passing as a pointer to the first element
void times2(int *a, int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 2);
}

// same thing but using array notation
void times3(int a[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 3);
}

// same thing but using array notation with size
void times4(int a[5], int len)
{
    for (int i = 0; i < len; i++)
        // a[i] *= 4; - this would manipulate the orifinal array
        printf("%d\n", a[i] * 4);
}

void print_2D_array(int a[2][3]) // print_2D_array(int a[][3]) would also work
{
    for (int row = 0; row < 2; row++)
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
    printf("\n");
}

int main(void)
{
    int x[5] = {1, 2, 3, 4, 5};

    times2(x, 5);
    times3(x, 5);
    times4(x, 5);

    int y[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};
    print_2D_array(y);
}