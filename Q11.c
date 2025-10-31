#include<stdio.h>
int main()
{
  int a;
  int remainder;
  int new = 0;


  printf("Please enter your number 'a' .\n");
  scanf("%d",&a);

  while(a!=0)
  {
    remainder = a%10;
    new=(new*10)+remainder;
    a=a/10;

  }

  printf("The reverse of the number you entered is %d",new);

  return 0;

}