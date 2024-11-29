#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numbers;
   int sum=0;
    for(int i=0;i<5;i++){
        printf("\n Enter nums");
        scanf("%d",&numbers);
        sum += numbers;
    }
      printf("sum = %d",sum);
    return 0;
}
