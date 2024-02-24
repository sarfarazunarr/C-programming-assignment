/*
Write a program which asks the user to enter 10 numbers and prints out the message ”even” if the number is even
 and ”divisible by three” if the number is divisible by three.
*/
#include <stdio.h>

int main() {
    //Detect even and divisible of three
    int number;
    for(int i = 1; i <= 10; i++){
    printf("Enter value (%d): ", i);
    scanf("%d", &number);
    if((number % 3 == 0) && (number % 2 == 0) ){
        printf("Your number %d is even & divisible by three! \n", number);
    } else if(number % 2 == 0){
        printf("Your number %d is even! \n", number);
    } else if(number % 3 == 0){
        printf("Your number %d is divisible by three! \n", number);
    } else {
        printf("Your number %d is odd! \n", number);
    }
}
    printf("\n By Sarfaraz 2k23-BSCS-21");
    return 0;
}

