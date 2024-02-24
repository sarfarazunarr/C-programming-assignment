/*
Because of the high price of petrol, you are concerned with the fuel consumption of your car. As a result you have a record of the kilometres driven and litres used for each tank of petrol you purchase. Write a program that will display the kilometres driven, litres used, and consumption (in litres/100km) for each tankful. After processing all the input information, the program should calculate the overall average consumption:
Enter the litres used (-1 to end): 57.6 Enter the kilometres driven: 459
The litres/100km for this tank was 12.5 Enter the litres used (-1 to end): 45.3 Enter the kilometres driven: 320
The litres/100km for this tank was 14.2 Enter the litres used (-1 to end): -1
The overall average consumption was: 13.4
*/
#include <stdio.h>
int main(){
    //Week5 Exercise 1 (By Sarfaraz 2K23 BSCS 21)
    float liters, km;
    printf("Enter the litres used (-1 to end): ");
    scanf("%f", &liters);
    printf("Enter the kilometres driven: ");
    scanf("%f", &km);
    printf("The litres/100km for this tank was %.1f", (liters / km) * 100);
    return 0;
}