#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1;
  int num2;
  char op;
  printf("Enter operation: ");
  scanf("%c",&op);
  printf("Enter number1: ");
  scanf("%d",&num1);
  printf("Enter number2: ");
  scanf("%d",&num2);
  switch(op){
      case '+':
          printf("%d + %d = %d",num1,num2,num1+num2);
      break;
      case '-':
          printf("%d - %d = %d",num1,num2,num1-num2);
      break;
      case '*':
          printf("%d * %d = %d",num1,num2,num1*num2);
      break;
      case '/':
          printf("%d / %d = %d",num1,num2,num1/num2);
      break;
      default:
        printf("invalid operation");
        break;

  }

    return 0;
}
