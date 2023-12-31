#include<stdio.h>
# include <stdlib.h>
void mean_variance(float *my_array, int length  , float *result);
int main()
{
    float*my_array;
    my_array=(float*)malloc(100*sizeof(float));

    for (int i = 1; i < 101; i++)
    {
        my_array[i-1]=i*i;
    }

    float result[2]; // initializing the length of the array
    mean_variance(my_array, 100, result);

    // Print mean and variance
    printf("Mean: %f\n", result[0]);
    printf("Variance: %f\n", result[1]);
    
    // Free the allocated memory
    free(my_array);

    return 0;
}

void mean_variance(float *array, int length  , float *result) {
    
    float mean = 0.0;
    float variance = 0.0;

    // Calculate mean
    for (int i = 0; i < length; i++) {
        mean += array[i];
    }
    mean /= length;

    // Calculate variance
    for (int i = 0; i < length; i++) {
        variance += (array[i] - mean) * (array[i] - mean);
    }
    variance /= length;

    // Assign results to the output array
    result[0] = mean;
    result[1] = variance;
}