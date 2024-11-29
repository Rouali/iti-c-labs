#include <stdio.h>
#include <stdlib.h>

int main()
{
   float initialAmount;
   float numOfYears;
   float interestRate;
   float  result;
   printf("Enter your initial amount : \n");
   scanf("%f",&initialAmount);
   printf("Enter number of years : \n");
   scanf("%f",&numOfYears);
   printf("The interest rate : \n");
   scanf("%f",&interestRate);
   interestRate /= 100.0;
    result = initialAmount * pow((1+interestRate),numOfYears);
    printf("At the end of %0.1f years , u will have : %f $",numOfYears,result);
    return 0;
}
