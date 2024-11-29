#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pounds1,shillings1,pence1;
    int pounds2,shillings2,pence2;
    int totalPounds,totalShillings,totalPence;
    char operation;
    float num;
    printf("enter desired operation(+,-,):");
    scanf("%c",&operation);
    printf("Enter first amount:(pound.shilling.pence)\n");
    scanf("%d.%d.%d",&pounds1,&shillings1,&pence1);
    printf("Enter second amount:(pound.shilling.pence)\n");
    scanf("%d.%d.%d",&pounds2,&shillings2,&pence2);
    switch(operation){
        case '+':
            totalPence=pence1+pence2;
            totalShillings=shillings1+shillings2+totalPence/12;
            totalPence%=12;
            totalPounds = pounds1 + pounds2 + totalShillings / 20;
            totalShillings %= 20;
            break;
        case '-':
            totalPence=pence1-pence2;
            totalShillings=shillings1-shillings2-totalPence/12;
            totalPence%=12;
            totalPounds = pounds1 - pounds2 - totalShillings / 20;
            totalShillings %= 20;
            break;
        case '*':
            printf("enter a floating point number:");
            scanf("%f",&num);
            int totalPenceAmount = (pounds1 * 240) + (shillings1 * 12) + pence1;
            int resultPence = (int)(totalPenceAmount * num);

            totalPounds = resultPence / 240;
            totalShillings = (resultPence % 240) / 12;
            totalPence = resultPence % 12;
            break;
        default:
            printf("invalid operation");
    }
    printf("Total is %d.%d.%d\n", totalPounds, totalShillings, totalPence);
    return 0;
}
