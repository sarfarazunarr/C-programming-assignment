/*
Write a C-Program to calculate area and Perimeter of the triangle and rectangle. [Area of
triangle= 1/2 x base x vertical height , Perimeter of triangle = a + b + c]
[Area of rectangle= width x height , Perimeter of rectangle = 2( a + b)]
*/
#include <stdio.h>

int main()
{
    printf("Welcome to Area Calculator!\n");
    printf("Calculate the perimeter or area of: rectangle/triangle. Press (R) or (T): ");
    char ask; // Character to ask user what he wants to calculate?
    // Declaration of all variables used in this program
    double width, height, base, verticleHight, side1, side2;
    scanf("%c", &ask); // Getting user input
    // Processing based on condition
    if (ask == 'R' || ask == 'r')
    {
        // Calculation for rectangle
        printf("Enter width of rectangle: ");
        scanf("%lf", &width);
        printf("Enter height of rectangle: ");
        scanf("%lf", &height);
        printf("\n The area of rectangle is: %.2lf", width * height);
        double sum = width + height;
        printf("\n The perimeter of rectangle is: %.2lf", 2 * sum);
    }
    else if (ask == 'T' || ask == 't')
    {
        // Calculation for triangle
        printf("Enter base of triangle: ");
        scanf("%lf", &base);
        printf("Enter verticle height of triangle: ");
        scanf("%lf", &verticleHight);
        printf("Enter Side1 of triangle: ");
        scanf("%lf", &side1);
        printf("Enter Side2 of triangle: ");
        scanf("%lf", &side2);
        printf("\n The area of triangle is: %.2lf", 0.5 * base * verticleHight);
        printf("\n The perimeter of rectangle is: %.2lf", side1 + side2 + base);
    }
    else
    {
        printf("Invalid character entered! Please type anyone R / T");
    }
    printf("\nSarfaraz 2K23-CS-21");
    return 0;
}