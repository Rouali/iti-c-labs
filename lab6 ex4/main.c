#include <stdio.h>
#include <stdlib.h>
void scanArray(int arr[],int n);
//void printArray(int arr[],int n);
int getArrSum(int arr[],int n);

int main()
{
    int n;
    printf("enter numbers :");
    scanf("%d",&n);
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n);

    return 0;
}
void scanArray(int arr[],int n){
   int i;
   for(i=0;i<n;i++){
        printf("enter %d element ",i+1);
        scanf("%d",&arr[i]);
    }
}
void printArray(int arr[],int n){
    int sum = getArrSum(arr,5);
    printf("sum = %d",sum);
}
int getArrSum(int arr[],int n){
    int sum=0;
    int i;
    for(i=0;i<n;i++)
        sum += arr[i];

    return sum;
}

