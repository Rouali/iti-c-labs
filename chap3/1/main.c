#include <stdio.h>
#include <stdlib.h>
#define col 10
#define row 20

int main()
{
    int table[row][col]={0};
    int i , j , n ;
    int count = 1 ;
    printf("Enter number : ");
    scanf( "%d" , &n );
    for( i = 0 ; i < row ; i++){
        for( j = 0 ; j < col ; j++ ){
            table[i][j]=n*count;
            printf("%d \t",table[i][j]);
        count++;

        }
        printf("\n");
    }
    return 0;
}
