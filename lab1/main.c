#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 1 */
    printf("Hello world!\n");
    /* 2 */
    char ch;
    printf("Enter character ");
    scanf("%c",&ch);
    printf("ASCII value is %d",ch);
    /*3*/
    int ascii;
    printf("\n Enter number ");
    scanf("%d",&ascii);
    printf("character value is %c",ascii);
    /*4*/
    int num;
    printf("\n Enter number");
    scanf("%d",&num);
    printf("hexa value is %x",num);
    /*5*/
    int num1;
    int num2;
    printf("\n Enter number1");
    scanf("%d",&num1);
    printf("\n Enter number2");
    scanf("%d",&num2);
    printf("%d + %d =%d \n",num1,num2,num1+num2);
    printf("%d - %d =%d \n",num1,num2,num1-num2);
    printf("%d * %d =%d \n",num1,num2,num1*num2);
    return 0;
}
