/*
Implement the following functions. The functions return a real number:
(a)	Function Celsius returns the Celsius equivalent of a Fahrenheit temperature (Hint: 0 Celsius is equal to 32 Fahrenheit and 100 Celsius is equal to 212 Fahrenheit).
(b)	Function Fahrenheit returns the Fahrenheit equivalent of a Celsius temperature. Use these functions to write a program that prints charts showing the Fahrenheit equivalent of all Celsius temperatures between 0 and 100 degrees, and the Celsius equivalent of all Fahrenheit temperatures between 32 and 212 degrees. Print the output neatly in a table.
*/
#include <stdio.h>

//Week6&7 Exercise 4 //By Sarfaraz 2k23-BSCS-21
float fahrenheitToCelsius(float fahrenheit){
    return (5.0 / 9.0) * (fahrenheit - 32);
}
float celsiusToFahrenheit(float celcius){
    return (9.0 / 5.0) * celcius + 32;
}
int main(){
    printf("\tCelcius\t\tFahrenheit\n");
    for(int i = 0; i <= 100; i++){
        float fahreneit = celsiusToFahrenheit(i);
        printf("\t\t%d\t\t\t%.2f\n", i, fahreneit);
    }
    return 0;
}