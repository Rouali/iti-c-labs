#include <stdio.h>
#include <stdlib.h>

struct emp{
    int id;
    char name[30];
    int age;

};
int main()
{
    struct emp e1={};
    printf("enter your id :");
    scanf("%d",&(e1.id));
    printf("enter your name :");
    scanf("%s",e1.name);
    printf("enter your age :");
    scanf("%d",&(e1.age));
    printf(" your id is :%d \n name : %s \n age : %d",e1.id,e1.name,e1.age);

    return 0;
}
