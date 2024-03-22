/*
Write a program that reads 8 floating point values into an array and then prints out the second, fourth, sixth and eighth members of the array, and the sum of the first, third, fifth and seventh, using pointers to access the members of the array.
*/

#include <stdio.h>

int main() {
    float values[8];
    float *ptr = values;
    float sum = 0.0;

    // Input phase: Read 8 floating point values into the array
    printf("Enter 8 floating point values:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%f", &values[i]);
    }

    // Output phase: Print the specified elements and calculate the sum
    printf("\nSecond, Fourth, Sixth, Eighth elements of the array:\n");
    for (int i = 1; i < 8; i += 2) {
        printf("%.2f ", *(ptr + i));
    }

    printf("\n\nSum of the First, Third, Fifth, Seventh elements of the array:\n");
    for (int i = 0; i < 8; i += 2) {
        sum += *(ptr + i);
    }
    printf("%.2f\n", sum);

    return 0;
}
