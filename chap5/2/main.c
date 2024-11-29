#include <stdio.h>
#include <stdlib.h>
double power(double n, int p );

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
    double x;
    x = power(2 , 2);
    printf("%.2lf",x);
    return 0;
}
