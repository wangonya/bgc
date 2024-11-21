#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    // grt out of the C locale to one that likely has the euro symbol
    setlocale(LC_ALL, "");

    // original multibyte string with euro symbol (unicode point 20ac)
    char *mb_string = "The cost is \u20ac1.23"; // €1.23
    size_t mb_len = strlen(mb_string);

    // wide character array that will hold the converted string
    wchar_t wc_string[128]; // holds up to 128 wide characters

    // convert the MB string to WC; this returns the number of wide characters
    size_t wc_len = mbstowcs(wc_string, mb_string, 128);

    // print result -- note the %ls for wide char strings
    printf("multibyte: \"%s\" (%zu bytes)\n", mb_string, mb_len);
    printf("wide char: \"%ls\" (%zu characters)\n", wc_string, wc_len);
}