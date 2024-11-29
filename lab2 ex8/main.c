#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int reversed=0;
    int reminder;
    printf("Enter number: ");
    scanf("%d",&number);
    while(number!=0){
        reminder = number%10;
        reversed = reversed*10 + reminder;
        number/=10;
    }
    printf("reversed number %d \n" , reversed);



    return 0;
}
