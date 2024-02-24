/*
Write a C program that uses a while loop to calculate and print the sum of the even integers from 2 to 30.
*/
#include <stdio.h>
int main(){
    //Week5 Exercise 2 By Sarfaraz 2K23 BSCS 21
    int num = 2;
    int sum = 0;
    while(num <= 30){
        if(num % 2 == 0){
            sum += num;
            printf("\n %d added = %d", num, sum);
        }
        
        num++;
    }
    printf("\n And Finally sum is %d", sum);
    return 0;

}