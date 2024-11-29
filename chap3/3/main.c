#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  char ch;
  long number = 0;
  int i;
  printf("Enter a number : \n");
  for ( i = 0 ; i < 6 ; i++){
          ch = _getche();
          number = ( number * 10 ) + ( ch - '0' );
      }
      printf(" the number is : %ld\n",number);
    return 0;
}
