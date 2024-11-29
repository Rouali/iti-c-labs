#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    int arr[size]={0};
    int max,min;
    for(int i=0;i<size;i++){
        printf("enter num:");
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    printf("array is : ");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    for(int i=1;i<size;i++){
        if (max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }

    }
    printf("\n max : %d ",max);
    printf("\n min : %d ",min);
    return 0;
}
