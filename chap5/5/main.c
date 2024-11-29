#include <stdio.h>
#include <stdlib.h>
long hms_to_secs(int hrs, int mins, int secs){
    int totalSeconds = hrs*3600 + mins *60 + secs;
    return totalSeconds;
}
int main()
{
    int hours,minutes,seconds;
    scanf("%d:%d:%d",&hours,&minutes,&seconds);
    long totalTime = hms_to_secs(hours,minutes,seconds);
    printf("%ld",totalTime);
    return 0;
}
