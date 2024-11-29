#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pence1,shillings1,pounds1;
    int pence2,shillings2,pounds2;
    int totalPence,totalShillings,totalPound;
    printf("Enter first amount in(pounds.shillings.pence)");
    scanf("%d.%d.%d",&pounds1,&shillings1,&pence1);
    printf("Enter second amount in(pounds.shillings.pence)");
    scanf("%d.%d.%d",&pounds2,&shillings2,&pence2);
    totalPound = pounds1 + pounds2;
    totalShillings = shillings1 + shillings2;
    totalPence = pence1 + pence2;
    if(totalPence > 11){
        totalShillings += totalPence/12;
        totalPence %= 12;
    }
    if(totalShillings > 19){
        totalPound += totalShillings/20;
        totalShillings %= 20;
    }
    printf("Total = %d.%d.%d",totalPound,totalShillings,totalPence);


    return 0;
}
