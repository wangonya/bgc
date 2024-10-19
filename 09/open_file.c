#include <stdio.h>

int main(void)
{
    FILE *fp; // variable to represent open file

    fp = fopen("/home/wangonya/code/bgc/09/open_file.c", "r"); // open a file for reading

    int c = fgetc(fp); // read a single character
    printf("%c\n", c); // print char to stdout

    fclose(fp);
}