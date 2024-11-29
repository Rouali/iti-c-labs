#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter month: ");
    scanf("%d",&month);
    switch(month){
        case 1 : case 3 :  case 5 : case 7 : case 8 : case 10 : case 12 :
            printf("month %d has 31 day",month);
            break;
        case 4 : case 6 : case 9 : case 11 :
             printf("month %d has 30 day",month);
             break;
        case 2 :
            printf("month %d has 28 day",month);
            break;
        default :
            printf("invalid month");
            break;
    }
    return 0;
}
