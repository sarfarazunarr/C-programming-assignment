/*
Write a program that reads in a four-digit number, separates the number into its individual digits and prints them separated by three spaces. Thus given the number 4233, the program should print:
4	2	3	3

*/
#include <stdio.h>
int main(){
    //Week5 Exercise 4 By Sarfaraz 2K23 BSCS 21
    int value;
    printf("Enter any 4 number digit: ");
    scanf("%d", &value);
    //Spliting number
    int thousands = value / 1000;
    int hundreds = (value % 1000) / 100;
    int tens = (value % 100) / 10;
    int ones = value % 10;
    printf("%d  %d  %d  %d", thousands, hundreds, tens, ones);
    return 0;
}