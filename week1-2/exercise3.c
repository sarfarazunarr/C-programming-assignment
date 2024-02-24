/*
Write a C-Program to swap two integer numbers without and with using third variable.

*/
#include <stdio.h>
int main()
{
    // Swapping Variables data Exercise 3
    int val1 = 10;
    int val2 = 200;
    int temp;
    printf("\nValues before swipping: val1: %d, val2: %d", val1, val2);
    // Swapping Values
    temp = val1;
    val1 = val2;
    val2 = temp;
    printf("\nValues before swipping: val1: %d, val2: %d", val1, val2);
    printf("\n Sarfaraz Unar 2K23-CS-21");
    return 0;
}
