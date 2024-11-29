#include <stdio.h>
#include <stdlib.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};


int main()
{
    struct time time1;
    printf("enter hours:minutes:seconds : ");
    scanf("%d:%d:%d",&time1.hours,&time1.minutes,&time1.seconds);
    long totalsecs = time1.hours*3600 + time1.minutes*60 + time1.seconds;
    printf("total seconds : %ld",totalsecs);
    return 0;
}
