/*
Write a program that reads a number and determines and prints whether it is odd or even. (Hint: use the modulus operator. Any even number is multiple of two, and any multiple of two gives a remainder of zero when divided by two.)
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    //Detect even and odd
    int number;
    bool run = true;
    printf("Press 111 to stop! \n");
    while(run){
    printf("Enter value to detect even and odd: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("Your number %d is even! \n", number);
    } else if(number == 111){
        run = false;
        
    } else {
        printf("Your number %d is odd! \n", number);
    }
}
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}
