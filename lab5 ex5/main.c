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
struct point{
    int x;
    int y;

};
int main()
{
    struct point point1;
    printf("enter x :");
    scanf("%d",&point1.x);
    printf("enter y :");
    scanf("%d",&point1.y);
    gotoxy(point1.x,point1.y);
    printf("rawan ali");


    return 0;

}
