/*
Consider the following array of integers:
Implement the following pointer notations to traverse and display the given array ’arr’.

A.	Printing array using array[i] notation.
B.	Printing array using ptr[i] notation.
C.	Printing array using *(array+i) notation.
D.	Printing array using *(ptr+i) notation.
E.	Printing array using *ptr notation.

*/
#include <stdio.h>

int main() {
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // A. Printing array using array[i] notation.
    printf("A. Printing array using array[i] notation:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // B. Printing array using ptr[i] notation.
    printf("B. Printing array using ptr[i] notation:\n");
    int *ptr = arr;
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n\n");

    // C. Printing array using *(array+i) notation.
    printf("C. Printing array using *(array+i) notation:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n\n");

    // D. Printing array using *(ptr+i) notation.
    printf("D. Printing array using *(ptr+i) notation:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n\n");

    // E. Printing array using *ptr notation.
    printf("E. Printing array using *ptr notation:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *ptr);
        ptr++;  // Move to the next element
    }
    printf("\n");

    return 0;
}