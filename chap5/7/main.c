#include <stdio.h>
#include <stdlib.h>
double power(double n, int p ){
    int i;
    double result=1.0;
    for ( i = 0 ; i < p ; i++){
        result*=n;
    }
    return result;
}
int main()
{
    double x,y,z,g;
    x = power(2.0 , 2);
    y = power(2 , 2);
    z = power((double)('2'-'0') , 2);
    g = power(2.0 , 2);
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf",x,y,z,g);
    return 0;
}
