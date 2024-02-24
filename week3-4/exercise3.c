/*
Write a program that reads in five integers and then determines and prints the largest and smallest integers in the group. Use only the techniques you have learnt so far, and make sure that the program only uses three variables. (Hint: use two of the variables to hold the current largest and smallest integers.)
*/
#include <stdio.h>

int main() {
    int num, largest, smallest;

    // Read the first number and initialize largest and smallest
    printf("Enter the first integer: ");
    scanf("%d", &num);
    largest = smallest = num;

    // Read the remaining four numbers
    for (int i = 1; i < 5; i++) {
        printf("Enter another integer: ");
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }

        if (num < smallest) {
            smallest = num;
        }
    }

    printf("The largest integer is: %d\n", largest);
    printf("The smallest integer is: %d\n", smallest);
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}


