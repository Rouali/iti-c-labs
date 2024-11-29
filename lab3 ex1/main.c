#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    int sum=0;
   int arr[size]={0};
   for(int i=0;i<size;i++){
        printf("enter num: ");
        scanf("%d",&arr[i]);
        sum += arr[i];
   }
   printf("sum = %d",sum);
    return 0;
}
