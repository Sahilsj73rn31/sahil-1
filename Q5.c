#include<stdio.h>
int main()
{
  int num,a;

  printf("Please enter your number.\n");
  scanf("%d",a);

  for(a=1; a <=1000000000; a++)
  {
    printf("The factorial of the number '%d' is %d",a, a*a++);
  }
  return 0;
}