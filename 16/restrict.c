void swap(int *restrict a, int *restrict b)
{
    int t;

    t = *a;
    *a = *b;
    *b = t;
}

int main(void)
{
    int x = 10, y = 20;
    swap(&x, &y); // ok! a and b point to different things
    swap(&x, &x); // undefined behaviour! a and b point to different things
}