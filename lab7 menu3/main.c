#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define row 3
#define col 20
#define null -32
void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
  GetStdHandle( STD_OUTPUT_HANDLE ),
  coord
    );
  }
struct emp{
    int id;
    char name[30];
    int age;
};

int main()
{
    int size;
    printf("Enter number of employees: ");
    scanf("%d", &size);

    struct emp *ptr=(struct emp*)malloc(size*sizeof(struct emp));

    char menu[row][col]={"New","Display","Exit"};
    char menu2[row][col]={"Display_All ","Display_By_Id ","Display_By_Name"};

    int n =0,n2=0;
    int flag=0,flag2=0;
    int i;
    char ch;

    do{
        system("cls");

        for(i=0;i<row;i++){
            gotoxy(10,10+i);
            if(i==n)
                textattr(0x04);
        _cprintf("%s",menu[i]);
        textattr(0x07);
    }
    if(flag2 == 1){
        for(i=0;i<row;i++){
            gotoxy(20,10+i);
            if(i==n2)
                textattr(0x04);
        _cprintf("%s ",menu2[i]);
        textattr(0x07);
    }
    }

    ch=_getch();
    if (ch == null) {
            ch = _getch();
    switch(ch){
                //up
        case 72:
            if (flag2==0){
                n--;
               if(n<0)
                 n=2;
            }
            else{
            n2--;
            if(n2<0)
                n2=2;
            }
            break;
            //down
        case 80:
            if(flag2==0){
               n++;
               if(n>2)
                 n=0;
            }
            else{
               n2++;
            if(n2>2)
                n2=0;
            }

            break;
            //right
        case 77:
             if (n == 1) {
                flag2 = 1;
                n2 = 0;
                    }
            break;
            //left
        case 75:
                flag2=0;

            break;
            }
            //enter
        }else if(ch == 13){
            system("cls");
            if(!flag2){
                    switch(n){
                        case 0 :
                        for(i=0;i<size;i++){
                        printf("\nEnter Your Id :");
                        scanf("%d",&ptr[i].id);
                        printf("Enter Your Name :");
                        scanf("%s",ptr[i].name);
                        printf("Enter Your Age :");
                        scanf("%d",&ptr[i].age);
                        }
                        break;
                case 1 :
                  flag2=1;
                case 2 :
                  flag = 1;
                  break;
            }
            }else{
            switch(n2){
                case 0:
                    printf("Displaying All Employees:\n");
                    for (int i = 0; i < size; i++) {
                        printf("Id: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                        }
                break;

                case 1 :
                    printf("Enter Id to Search: \n");
                    int id, found = 0;
                    scanf("%d", &id);
                    for (int i = 0; i < size; i++) {
                            if (ptr[i].id == id) {
                            printf("Employee Found - Id: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                            found = 1;
                    break;

                }
            }
            if (!found) {
                printf("Employee with Id %d not found.\n", id);
                        }
                    break;

                case 2 :
                    printf("Enter Name to Search: ");
                        char name[30];
                        int found_name = 0;
                        scanf("%s", name);
                        for (int i = 0; i < size; i++) {
                            if (strcmp(ptr[i].name, name) == 0) {
                                printf("Employee Found - Id: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                                found_name = 1;
                                break;
                            }
                        }
                        if (!found_name) {
                            printf("Employee with name %s not found.\n", name);
                        }
                        break;
                }
            _getch();
        }
      }
    }while(flag==0);

    free(ptr);
    return 0;
}
