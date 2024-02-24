/*
Develop a program to calculate the basic salary of 5 employees where the hourly rate and the no. of hours worked by each employee are given by the user.
Note: Formula for calculating the basic salary = no. of hours worked * hourly rate.

*/
#include <stdio.h>
int main(){
    float numberofHours;
    float hourlyRate;
    float basicSalary[5];
    for (int i = 0; i < 5; i++){
        printf("Enter the worked hour and rate (%d): ", i + 1);
        scanf("%f%f", &numberofHours, &hourlyRate);
        basicSalary[i] = numberofHours * hourlyRate;
    }
    printf("\nBasic Salary\n");
    for (int i = 0; i < 5; i++){
        printf("%.2f\n", basicSalary[i]);
    }
}