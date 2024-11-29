#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fname[10];
    char lname[10];
    char fullname[20]="";
    printf("Enter your first name : ");
    scanf("%s",fname);
    printf("Enter your second name : ");
    scanf("%s",lname);
    strcat(fullname,fname);
    strcat(fullname," ");
    strcat(fullname,lname);
    printf("Your name is %s",fullname);

    return 0;
}
