#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 4

int main()
{
   int arr[rows][cols]={0};
   int i,j;
   int rowSum[rows]={0};

   printf("Enter the values :\n");
   for(i=0;i<rows;i++){
    for(j=0;j<cols;j++){
        printf("arr[%d][%d]: ", i, j);
        scanf("%d",&arr[i][j]);
        rowSum[i] += arr[i][j];
    }
    printf("\n");

   }
   for (i = 0; i < rows ; i++) {
        for (j = 0; j < cols ; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
   printf("Sum of each row:\n");
   for (int i = 0; i < rows; i++) {
        printf("Row %d : %d \n", i + 1, rowSum[i]);
    }

    return 0;
}
