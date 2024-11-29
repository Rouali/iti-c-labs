#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5]={0};
   int*ptr=arr;
   int i;
   for(i=0;i<5;i++){
         printf("enter num :");
         scanf("%d",ptr+i);
   }
   printf("Your array is : \n");
   for(i=0;i<5;i++)
       printf("%d",*(ptr+i));
    return 0;
}
