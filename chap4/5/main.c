#include <stdio.h>
#include <stdlib.h>
struct date{
    int month;
    int day;
    int year;
};

int main()
{
    struct date date1;
    printf("enter date in format (dd/mm/yy) : ");
    scanf("%d/%d/%d",&date1.day,&date1.month,&date1.year);
    printf("the date is : %d/%d/%d",date1.day,date1.month,date1.year);
    return 0;
}
