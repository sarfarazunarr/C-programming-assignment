/*
Write a C-Program to perform the simple arithmetic operations (addition, subtraction, multiplication, division, remainder).
*/
#include <stdio.h>
// Create a Calculator to perform simple arithmatic calculation
int main()
{
    printf("Welcome to Calculator!");
    // Creating empty variable for getting data
    char operator;
    double value1, value2;
    // Getting inputs of operator and operands
    printf("\nEnter 1st number: ");
    scanf("%lf", &value1);
    printf("Enter 2nd number: ");
    scanf("%lf", &value2);
    printf("\nTo see all calculation press (?) \nEnter operator: ");
    scanf(" %c", &operator);
    printf("\n");
    // Checking operator for performing calculation
    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", value1, value2, value1 + value2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", value1, value2, value1 - value2);
        break;
    case '*':
        printf("%.1lf x %.1lf = %.1lf", value1, value2, value1 * value2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", value1, value2, value1 / value2);
        break;
    case '?':
        // Custom for testing and preview purpose
        printf("%.1lf + %.1lf = %.1lf \n", value1, value2, value1 + value2);
        printf("%.1lf - %.1lf = %.1lf \n", value1, value2, value1 - value2);
        printf("%.1lf x %.1lf = %.1lf \n", value1, value2, value1 * value2);
        printf("%.1lf / %.1lf = %.1lf \n", value1, value2, value1 / value2);
        break;
    default:
        printf("Enter valid operator!");
    }
    printf("\nSarfaraz Unar 2K23-BSCS-21");
    printf("\nThanks For Using!");
    return 0;
}