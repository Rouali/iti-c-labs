#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define null -32
#define row 3
#define col 10

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
int main()
{
    char menu[3][10]={"new","display","exit"};
    char menu2[2][10]={"hi","hello"};
    int i;
    int n=0,n2=0;
    int flag =0,flag2=0;
    char ch;
    do{
        system("cls");
        for(i=0;i<3;i++){
            gotoxy(10,10+i);
            if(i==n)
                textattr(0x04);
        _cprintf("%s",menu[i]);
        textattr(0x07);
    }
    if(flag2){
        for(i=0;i<2;i++){
            gotoxy(20,10+i);
            if(i==n2)
                textattr(0x04);
        _cprintf("%s",menu2[i]);
        textattr(0x07);
    }
    }

    ch=_getch();
    switch(ch){
        case - 32:
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
            if(flag2==0){
                flag2=1;
                n2=0;
            }
            if(n==2){
                flag=1;
            }
            break;
            //left
        case 75:
            if(flag2=1)
                flag2=0;

            break;
            }
        break;

        //enter
        case 13:
            system("cls");
            if(n==0){
                printf("new selected");
            }
            else if(n==1){
                printf("display selected");
            }
            else if(n==2){
                printf("exit");
                flag=1;
            }
            _getch();
            break;
            //esc
        case 27:
            flag=1;
            break;
    }
    }while(flag==0);
    return 0;
}
