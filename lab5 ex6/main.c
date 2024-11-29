#include <stdio.h>
#include <stdlib.h>

struct complex_num{
    float real;
    float imaginary;
};
int main()
{
    struct complex_num number;
    printf("enter real num  :");
    scanf("%f",&number.real);
    printf("enter imaginary num :");
    scanf("%f",&number.imaginary);
    printf("the number is : %f + %f i",number.real,number.imaginary);


    return 0;
}
