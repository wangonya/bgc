void *my_memcpy(void *dest, void *src, int byte_count)
{
    // convert void*s to char*s
    char *s = src, *d = dest;

    // now that we have char*s, we can dereference and copy them
    while (byte_count--)
        *d++ = *s++;

    return dest
}