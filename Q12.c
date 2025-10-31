#include <stdio.h>
int main()
{
  float a,b,sum;

  printf("Please enter your first number 'a'.\n");
  scanf("%f",&a);

  printf("Please enter your second number 'b'.\n");
  scanf("%f",&b);

  sum = a+b;

  printf("The sum of the two number '%f' AND '%f' is %f",a,b,sum);

  return 0;

}