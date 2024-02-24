/*
A car park charges a $2.00 minimum fee to park for up to 3 hours, and an additional $0.50 for each hour or part hour in excess of three hours. The maximum charge for any given 24- hour period is $10.00. Assume that no car parks for more than 24 hours at a time. Write a C program that will calculate and print the parking charges for each of 3 customers who parked their car in the car park yesterday. The program should accept as input the number of hours that each customer was parked, and output the results in a neat tabular form, along with the total receipts from the three customers:
*/
#include <stdio.h>

float parkingFee(int parkHours){
    float minFee = 2.0; //Minimum Fee
    float fee = 0; //Fees of car parking
    if(parkHours > 3){
        fee += minFee;
        fee += (parkHours - 3) * 0.50; 
    } else if(parkHours < 3){
        fee += minFee;
    }
    if(fee > 10.0){
        fee = 10.0;
    }
    return fee;
}
//Week6&7 Exercise 3
int main(){

    float hours[3];
    float amount[3];
    float totalamount, totalhours;
    for (int i = 0; i < 3; i++){
        printf("Enter hours of %d customer: ", i + 1);
        scanf("%f", &hours[i]);
        amount[i] = parkingFee(hours[i]);
    }

    printf("Car\t\tHours\t\tCharge\n");
    for (int i = 0; i < 3; i++){
        printf("%d\t\t%.1f\t\t\t%.2f\n", i + 1, hours[i], amount[i]);
        totalamount += amount[i];
        totalhours += hours[i];
    }
    printf("Total\t%.1f\t%.2f\n", totalhours, totalamount);

    return 0;

}