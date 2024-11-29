#include <stdio.h>
#include <stdlib.h>

int main()
{
    int persons;
    int numOfChairs;
    int possibility = 1;
    int i;
    printf("Enter number of persons : \n");
    scanf("%d",&persons);
    printf("Enter number of chairs : \n");
    scanf("%d",&numOfChairs);
    for( i = 0 ; i < numOfChairs ; i++ ){
            possibility *= ( persons - i );
    }
    printf("Number of possibility = %d",possibility);
    return 0;
}
