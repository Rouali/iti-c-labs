#include <stdio.h>
#include <stdlib.h>
struct emp{
    int id;
    char name[30];
    int age;
};
int main()
{
    int i;
     struct emp emps[2];
     printf("enter 2 employees: \n");
     for(i=0;i<2;i++){
        printf("enter your name %d : ",i+1);
        scanf(" %s",emps[i].name);
        printf("enter your id %d :",i+1);
        scanf(" %d",&emps[i].id);
        printf("enter your age %d :",i+1);
        scanf(" %d",&emps[i].age);
     }

      for(i=0;i<2;i++){
        printf("enter your name : %s \n your id is : %d \n your age is : %d ",emps[i].name,emps[i].id,emps[i].age);
     }

    return 0;
}
