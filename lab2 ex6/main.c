#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int Factorial=1;
    printf("\n Enter num");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
        Factorial *= i;
    printf("Factorial = %d",Factorial);
    return 0;
}
