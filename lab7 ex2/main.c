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
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    struct emp *ptr =(struct emp*)malloc(size*sizeof(struct emp));
    if(ptr != NULL){
        for(i=0;i<size;i++){
                printf("\nenter your id :");
                scanf("%d",&ptr[i].id);
                printf("enter your name :");
                scanf("%s",ptr[i].name);
                printf("enter your age :");
                scanf("%d",&ptr[i].age);
        }
        for(i=0;i<size;i++){
            printf("\nEmployee %d:\n", i + 1);
            printf("\nYour id is : %d\nYour name is : %s\nYour age is : %d\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->age);
        }
         free(ptr);
    }
    return 0;
}
