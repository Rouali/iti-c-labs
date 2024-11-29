#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number ;

    int i ;
    do{
            printf("Enter number : \n");
            scanf("%d",&number);
            int factorial = 1;
            for( i = 1 ; i <= number ; i++){
                factorial *= i;
            }
            printf("Factorial = %d \n",factorial);
    }while( number != 0);
    return 0;
}
