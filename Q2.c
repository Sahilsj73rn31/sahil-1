#include <stdio.h>
int main()
{
  float a,b;
  float sum;


  printf("Please enter your first number.'a'\n");
  scanf(" %f",&a);

  printf("Please enter your second number.'b'\n");
  scanf(" %f",&b);

  sum = a+b;

  printf("The sum of the number 'a' and 'b' is %f", sum);

  return 0;


}