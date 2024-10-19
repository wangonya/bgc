#include <stdio.h>

int main(void)
{
    FILE *fp;
    int c;

    // read char by char
    fp = fopen("/home/wangonya/code/bgc/09/open_file.c", "r"); // open a file for reading
    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);

    // read line by line
    char s[1024]; // big enough?
    int linecount = 0;
    fp = fopen("/home/wangonya/code/bgc/09/open_file.c", "r"); // open a file for reading
    while (fgets(s, sizeof s, fp) != NULL)
        printf("%d: %s", ++linecount, s);

    fclose(fp);
}