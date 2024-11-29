#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int isPrime = 1;
    printf("Enter number: ");
    scanf("%d",&number);
        if(number<=1){
                printf("1 or 0 not prime");
            }
        else{
            for(int i=2;i<=number/2;i++){
                    if(number%i==0){
                        isPrime=0;
            break;
            }}
          if(isPrime==1){
            printf("prime");
          }
          else{
            printf("not prime");
          }


          }
    return 0;
}
