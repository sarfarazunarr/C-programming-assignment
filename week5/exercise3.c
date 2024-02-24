/*
Write a C program that uses a while loop to calculate and print the product of the odd integers from 3 to 19.
*/
#include <stdio.h>
int main(){
    //Week5 Exercise 3 By Sarfaraz 2K23 BSCS 21
    int num = 3;
    int product = 3;
    while(num <= 19){
        if(num % 2 != 0){
            product *= num;
            printf("\n %d multiplied %d", num, product);
        }
        num++;
    }
    printf("\n And Finally product is %d", product);
    return 0;
}