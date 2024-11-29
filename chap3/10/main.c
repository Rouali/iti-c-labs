#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float initialAmount = 3000 ;
    float interestRate = 5.5 ;
    float  result =  5124.43 ;
    int numOfYears ;
    printf("initial amount : %f \n",initialAmount);
    printf("The interest rate : %f \n",interestRate);
    printf("Total = %f\n",result);
    interestRate /= 100.0;
    numOfYears = log(result/initialAmount)/log(1+interestRate);
    printf("Number of years = %d",numOfYears);
    return 0;
}
