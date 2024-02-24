/*
Write a program that reads 10 positive numbers from the keyboard and determines and displays the sum and average of the numbers.
*/
#include <stdio.h>

//Week 3&4 Exercise 1
int main(){
    int value, sum = 0, average;
    //Getting values from user
    printf("Enter 10 positive values to get sum and average!\n");

    for(int i = 1; i <= 10; i++){
        printf("Enter Value(%d): ", i);
        scanf("%d", &value);
        sum =+ value;
    }
    average = sum / 10; //Calculating Average
    printf("Your Sum is %d and average is %d", sum, average);
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}
