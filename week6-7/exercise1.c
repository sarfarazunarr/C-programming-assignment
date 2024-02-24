/*
Recall the program you wrote to implement a simple calculator now rewrite the same program using functions.
(Create Calculator)
*/
#include <stdio.h>

float calculate(float value1, float value2, char operators) {
    float result;
    switch (operators) {
        case '+':
            result = value1 + value2;
            break;
        case '-':
            result = value1 - value2;
            break;
        case 'x':
        case '*':
            result = value1 * value2;
            break;
        case '/':
            result = value1 / value2;
            break;
        default:
            printf("Invalid operator\n");
            return 0;  
    }
    printf("%.2f\n", result);
    return result;
}

int main() {
    // Week6&7 Exercise 1 By Sarfaraz 2K23 BSCS 21
    calculate(12, 12, '+');
    calculate(8, 42, '-');
    calculate(8, 4, '*');
    calculate(8, 2, 'x');
    calculate(20, 2, '/');
    
    return 0;
}
