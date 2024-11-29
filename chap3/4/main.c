#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op , another;
    int number1;
    int number2;
    do{
        printf("Enter first number , operation , second number :\n");\
        scanf("%d %c %d",&number1,&op,&number2);
        switch(op){
            case '-' :
                printf("ans = %d\n",number1-number2);
                break;
            case '+' :
                printf("ans = %d\n",number1+number2);
                break;
            case '*' :
                printf("ans = %d\n",number1*number2);
                break;
            case '/' :
                printf("ans = %d\n",number1/number2);
                break;
            default :
                printf("Invalid");
                break;
            }
            printf("Do another (y/n)?\n");
            scanf("  %c",&another);

    }while( another == 'y' );

    return 0;
}
