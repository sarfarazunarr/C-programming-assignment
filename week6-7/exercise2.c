/*
Write a program that uses six calls to the function rand() to generate six random integer numbers, num1, num2, num3, num4, num5, and num6, and then print them out. num1 should be in the range 1 to 2 (inclusive), num2 should be in the range 1 to 100 (inclusive), num3 should be in the range 0 to 9, num4 should be in the range 1000 to 1112 (inclusive), num5 should be in the range -1 to 1, and num 6 should be in the range -3 to 11.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Week6&7 Exercise 2 By Sarfaraz 2K23 BSCS 21
        int number = rand();

        printf("Range(1 | 2) %d\n", (number) %2 + 1);
        printf("Range (1-100) %d\n", (number) %100 + 1);
        printf("Range (0-9) %d\n", (number) %10); 
        printf("Range (1000-1112) %d\n", (number) %113 + 1000); 
        printf("Range (-1 to 1) %d\n", (number) %3 - 1); 
        printf("Range (-3 to 11) %d\n", (number) %15 - 3); 

    return 0;
}
