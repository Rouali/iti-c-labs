#include <stdio.h>
#include <stdlib.h>
struct point {
    int x;
    int y;
};
int main()
{
    struct point point1;
    struct point point2;
    printf("enter first point : ");
    scanf("%d %d",&point1.x,&point1.y);
    printf("enter second point : ");
    scanf("%d %d",&point2.x,&point2.y);
    printf("first  + second = (%d , %d)",point1.x+point2.x,point1.y+point2.y);
    return 0;
}
