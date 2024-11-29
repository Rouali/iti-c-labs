#include <stdio.h>
#include <stdlib.h>
struct phone{
    int areaCode;
    int exchange;
    int number;
};
int main()
{
    struct phone phone1 = {212,767,8900};
    struct phone phone2;
    printf("Enter area code , exchange and number :");
    scanf("%d %d %d ",&phone2.areaCode,&phone2.exchange,&phone2.number);
    printf("my number is : (%d) %d-%d ",phone1.areaCode,phone1.exchange,phone1.number);
    printf("your number is : (%d) %d-%d ",phone2.areaCode,phone2.exchange,phone2.number);

    return 0;
}
