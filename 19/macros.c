#include <stdio.h>
#include <math.h>

#define SQR(x) ((x) * (x))

#define QUADP(a, b, c) ((-(b) + sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a)))
#define QUADM(a, b, c) ((-(b) - sqrt((b) * (b) - 4 * (a) * (c))) / (2 * (a)))

//          macro              replacement
//      |-----------| |----------------------------|
#define QUAD(a, b, c) QUADP(a, b, c), QUADM(a, b, c)

// Combine the first two arguments to a single number,
// then have a commalist of the rest of them:
#define X(a, b, ...) (10 * (a) + 20 * (b)), __VA_ARGS__

// Stringified __VA_ARGS__
#define Y(...) #__VA_ARGS__

#define PRINT_INT_VAL(x) printf("%s = %d\n", #x, x)

#define CAT(a, b) a##b

int main(void)
{
    printf("%d\n", SQR(4));

    printf("2*x^2 + 10*x + 5 = 0\n");
    printf("x = %f or x = %f\n", QUAD(2, 10, 5));

    printf("%d %f %s %d\n", X(5, 4, 3.14, "Hi!", 12));

    printf("%s\n", Y(1, 2, 3));

    int a = 3;
    PRINT_INT_VAL(a);

    printf("%f\n", CAT(3.14, 1592));
}

/*
19.4.1 Mandatory Macros
These are all defined:

Macro	            Description
__DATE__	        The date of compilation—like when you’re compiling this file—in Mmm dd yyyy format
__TIME__	        The time of compilation in hh:mm:ss format
__FILE__	        A string containing this file’s name
__LINE__	        The line number of the file this macro appears on
__func__	        The name of the function this appears in, as a string129
__STDC__	        Defined with 1 if this is a standard C compiler
__STDC_HOSTED__	    This will be 1 if the compiler is a hosted implementation130, otherwise 0
__STDC_VERSION__	This version of C, a constant long int in the form yyyymmL, e.g. 201710L
*/