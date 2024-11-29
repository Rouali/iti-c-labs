#include <stdio.h>
#include <stdlib.h>
int factorial(int number);

int main()
{
    int number;
    int result;
    printf("\n Enter num");
    scanf("%d",&number);
    result = factorial(number);
    printf("Factorial = %d",result);
    return 0;
}
int factorial(int number){
    int factorial=1;
    for(int i=1;i<=number;i++)
        factorial *= i;
        return factorial;
}
