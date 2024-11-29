#include <stdio.h>
#include <stdlib.h>
int LargerDistance(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    int d1,d2;
    scanf("%d,%d",&d1,&d2);
    int y=LargerDistance(d1,d2);
    printf("%d",y);
    return 0;
}
