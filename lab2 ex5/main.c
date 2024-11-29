#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    do{
    system("cls");
    _flushall();
    printf("new\ndisplay\nexit \n");
    printf("Enter character \n");
    scanf("%c",&ch);
    switch(ch){
        case 'n':
        printf("New");
        break;
        case 'd':
        printf("Display");
        break;
        case 'e':
        printf("Exit");
        break;
        default:
        printf("wrong character");
    }
    _flushall();
    }while(ch!='e');
    return 0;
}
