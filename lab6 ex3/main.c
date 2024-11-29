#include <stdio.h>
#include <stdlib.h>
void swap(int*x,int*y);
int main()
{
    int x=20;
    int y=30;
    swap(&x,&y);
    printf("x : %d\n ",x);
    printf("y : %d",y);
    return 0;
}
void swap(int*x,int*y){
    int temp = *x;
    *x=*y;
    *y=temp;

}
