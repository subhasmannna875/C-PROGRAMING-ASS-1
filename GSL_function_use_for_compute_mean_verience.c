// File: main.c
#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
int main() {
// Step 1: Using malloc, create an array of hundred float elements
float *array = (float *)malloc(100 * sizeof(float));
// Step 2: Assign values to the array
for (int i = 0; i < 100; ++i) {
printf("Assigning value to array[%d]\n", i);
array[i] = (i + 1) * (i + 1);
}
// Step 3: Calculate mean and variance using the function from stats.c
float *result = calculate_mean_variance(array, 100);
// Step 4: Print mean and variance to terminal
printf("Mean: %f\nVariance: %f\n", result[0], result[1]);
// Step 5: Free allocated memory
free(array);
free(result);
20
return 0;
}
// stats.c
#include <gsl/gsl_statistics_float.h>
void gsl_mean_variance(float *data, size_t size, double *result) {
result[0] = gsl_stats_float_mean(data, 1, size);
result[1] = gsl_stats_float_variance(data, 1, size);
}