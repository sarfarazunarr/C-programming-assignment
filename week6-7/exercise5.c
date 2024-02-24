// The greatest common divisor of integers x and y is the largest integer that divides both x and
// y. Write a recursive function GCD that returns the greatest common divisor of x and y. The GDC of x and y is defined as follows: If y is equal to zero, then GDC(x, y) is x; otherwise GDC(x, y) is GDC(y, x % y) where% is the remainder operator.

#include <stdio.h>

// Week6&7 exercise 5 //By Sarfaraz 2K23-BSCS-21
int GCD(int x, int y){
    if(y == 0){
        return x;
    } else {
        return GCD(y, x % y);
    }
}

int main(){
    int num1, num2;
    printf("Enter 1st value: ");
    scanf("%d", &num1);
    printf("Enter 2nd value: ");
    scanf("%d", &num2);
    int result = GCD(num1, num2);
    printf("GCD(%d, %d) = %d\n", num1, num2, result);
    return 0;
}
