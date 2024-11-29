#include <stdio.h>
#include <stdlib.h>
int getMax(int num1 , int num2);
int main()
{
    int num1;
    int num2;
    int result;
    printf("enter num1 : ");
    scanf("%d",&num1);
    printf("enter num2 :");
    scanf("%d",&num2);
    result = getMax(num1,num2);
    printf("max num is : %d",result);
    return 0;
}
int getMax(int num1,int num2){
    return num1>num2?num1:num2;
}
