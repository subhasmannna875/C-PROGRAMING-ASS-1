#include <stdio.h>
#include <stdlib.h>

int main() {
    // Using malloc to allocate memory for 100 float elements
    float *floatArray = (float *)malloc(100 * sizeof(float));

    if (floatArray == NULL) {
        printf("Memory allocation failed.\n");
        return -1;
    }

    // Access and use the allocated memory
    for (int i = 0; i < 100; ++i) {
        floatArray[i] = i * 1.1; // Example: assigning values to elements
    }

    // Printing the elements of the array as an example
    printf("Elements of the float array:\n");
    for (int i = 0; i < 100; ++i) {
        printf("%.2f ", floatArray[i]);
    }
    printf("\n");

    // Freeing the allocated memory when done
    free(floatArray);

    return 0;
}
