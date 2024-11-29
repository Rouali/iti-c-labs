#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;
    printf("Enter number: ");
    scanf("%d",&number);
    printf("Prime numbers before %d are:\n", number);
        if(number<=1){
                printf("There are no prime numbers");
            }
            else{
            for(int i=2;i<number;i++){
                    int isPrime = 1;
            for(int j=2; j<=i/2; j++) {
                if(i%j==0) {
                    isPrime=0;
                    break;
                }
            }
            if(isPrime==1){
                printf("%d ",i);
          }}
          }
    return 0;
}
