#include <stdio.h>
#include <stdlib.h>
struct emp{
    int number;
    float compensation;
};
int main()
{
    struct emp e1[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter %d emp data : ",i+1);
        printf("enter number :");
        scanf("%d",&e1[i].number);
        printf("enter compensation :");
        scanf("%f",&e1[i].compensation);
    }
    for(i=0;i<3;i++){
        printf("Emp data is :\n %d %f\n",e1[i].number,e1[i].compensation);
    }
    return 0;
}
