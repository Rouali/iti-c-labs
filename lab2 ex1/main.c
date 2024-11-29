#include <stdio.h>
#include <stdlib.h>

int main()
{
     int degree;
    printf("Enter your degree \n");
    scanf("%d",&degree);
    if(degree>85){
        printf("Excellent ");
    }
    else if(degree>=75){
        printf("very good ");
    }
    else if(degree>=65){
        printf("Good ");
    }
    else {
        printf("Fail ");
    }
    printf("your degree %d",degree);
    return 0;
}
