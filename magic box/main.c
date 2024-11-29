#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
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
    int n;
    printf("enter odd number:");
    scanf("%d",&n);
    system("cls");
    int row = 0;
    int col = n / 2;
    int num = 1;
    while(num<=n*n){
        gotoxy(col*3,row);
        printf("%d",num);
        if(num%n==0)
            row=(row+1)%n;
        else{
            row=(row-1+n)%n;
            col=(col-1+n)%n;
        }
        num++;
    }



    return 0;
}
