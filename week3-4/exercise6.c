/*
A person invests $1000.0 in a savings account yielding 5% interest. Assuming that all interest is left on deposit in the account, calculate and print the amount of money in the account at the end of each year for 10 years. Use the following formula for determining these amounts: a = p(1+r)n
where
p is the original investment(i.e. the principal) r is the annual interest rate
n is the number of years
a is the amount on deposit at the end of the nth year.
*/
#include <stdio.h>

int main()
	//Week3&4 Exercise6 By Sarfaraz 2k23-BSCS-21
{

    float amount = 1000;
    int rate = 5;
    int years = 10;
    printf("\t Year \t \t Amount in deposit \n");
    for (int i = 1; i <= years; i++)
    {
        int profit = (amount / 100) * 5;
        amount += profit;
        printf("\t (%d) \t \t \t %.2f \n", i, amount);
    }
    return 0;
}

