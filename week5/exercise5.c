/*
Write a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:
a.	Account number
b.	Balance at beginning of month
c.	Total of all items charged by the customer this month
d.	Total of all credits applied to the account this month
e.	Allowed credit limit
The program should input each of these facts, calculate the new balance (initial balance + charges - credits) and determine if the new balance exceeds the credit limit. If it does, a suitable message should be displayed.
Enter account number (-1 to end): 100 Enter initial balance: 5394.78
Enter total charges: 1000 Enter total credits: 500.00 Enter credit limit: 5500.00 Account: 100
Credit limit: 5500
Balance: 5894.78
Credit Limit Exceeded

Enter account number (-1 to end): 200 Enter initial balance: 1000.00
Enter total charges: 123.45 Enter total credits: 321.00 Enter credit limit: 1500.00 Account: 200
Credit limit: 1500
Balance: 802.45

*/
#include <stdio.h>
int main(){
    //Week5 Exercise 5 By Sarfaraz 2K23 BSCS 21
    char run = 'Y'; //Y for Yes, N for No
    while(run == 'Y'){
    int accountNumber;
    float initialBalance, charges, credits, creditLimit, balance;
    printf("Enter account number (-1 to end): ");
    scanf("%d", &accountNumber);
    printf("Enter initial balance: ");
    scanf("%f", &initialBalance);
    printf("Enter total charges: ");
    scanf("%f", &charges);
    printf("Enter total credits: ");
    scanf("%f", &credits);
    printf("Enter credit limit: ");
    scanf("%f", &creditLimit);
    balance = (initialBalance + charges - credits);
    printf("Account: %d\n", accountNumber);
    printf("Credit Limit: %.2f\n", creditLimit);
    printf(balance > creditLimit ? "Credit Limit Exceeded" : "Balance: %.2f", balance);

    printf("\n Do you wants to continue? [Y/N]: ");
    scanf("%s", &run);

    }
    printf("Thanks for using!!!");
    return 0;
}