#include <stdio.h>
#include <threads.h>

int run(void *arg)
{
    (void)arg;

    puts("Thread running!");

    return 0;
}

#define THREAD_COUNT 10

int main(void)
{
    thrd_t t;

    for (int i = 0; i < THREAD_COUNT; i++)
    {
        thrd_create(&t, run, NULL);
        thrd_detach(t);
    }

    // Sleep for a second to let all the threads finish
    thrd_sleep(&(struct timespec){.tv_sec = 1}, NULL);
}