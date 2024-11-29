#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit , celsius , temp;
    int type ;
    printf("Enter the type 1 or 2 :");
    scanf( "%d" , &type );
    switch(type){
    case 1 :
         printf("Enter fahrenheit temp to convert to celsius :");
         scanf( "%f" , &temp );
         celsius =(5.0/9.0)*(temp-32);
         printf( "temp is : %f C" , celsius );
         break;
    case 2 :
        printf("Enter celsius temp to convert to fahrenheit :");
        scanf( "%f" , &temp );
        fahrenheit = ((9.0/5.0)*temp) + 32;
        printf( "temp is : %f F", fahrenheit );
        break;
    }



    return 0;
}
