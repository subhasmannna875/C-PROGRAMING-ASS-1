#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Maximum and Minimum values for different data types:\n");

    printf("For char:\n");
    printf("Maximum value of char: %d\n", CHAR_MAX);
    printf("Minimum value of char: %d\n", CHAR_MIN);

    printf("\nFor int:\n");
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of int: %d\n", INT_MIN);

    printf("\nFor long int:\n");
    printf("Maximum value of long int: %ld\n", LONG_MAX);
    printf("Minimum value of long int: %ld\n", LONG_MIN);

    printf("\nFor float:\n");
    printf("Maximum value of float: %E\n", FLT_MAX);
    printf("Minimum value of float: %E\n", -FLT_MAX);

    printf("\nFor double:\n");
    printf("Maximum value of double: %E\n", DBL_MAX);
    printf("Minimum value of double: %E\n", -DBL_MAX);

    return 0;
}
