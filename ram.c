#include<stdio.h0>
int main()
{
 int a,b;
 char operator;
 printf("enter any two integers you want =")
 scanf("%d %d",&a,&b);
 printf("enter an operator");
 scanf("%c",operator);
switch(operator)
{
  case'-':
  printf("the substraction is %d",a-b);
  break;

  case'+':
  printf ("the sum is %d",a+b);
  break;

  default:
  printf("you entered a wrong operator so enter again");

}

}
