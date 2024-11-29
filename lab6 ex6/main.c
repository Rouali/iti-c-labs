#include <stdio.h>
#include <stdlib.h>
struct emp{
    int id;
    char name[30];
    int age;
};
int main()
{
    struct emp e1={0};
    struct emp *ptr=&e1;
    printf("Enter your id : ");
    scanf("%d",&(ptr->id));
    printf("Enter your name : ");
    scanf("%s",ptr->name);
    printf("Enter your age : ");
    scanf("%d",&(ptr->age));
    printf("\n your id is : %d \n Your name is : %s \n Your age is : %d",ptr->id,ptr->name,ptr->age);
    return 0;
}
