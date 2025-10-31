#include<stdio.h>
int main()
{
  float a,b;
  float temp;


  printf("Please enter your first number 'a' .\n");
  scanf("%f",&a);

  printf("Please enter your second number 'b' .\n");
  scanf("%f",&b);

  temp = a;
  a=b;
  b=temp;

  printf("The numbers before swaping are '%f' and '%f'and after swaping are '%f' and '%f' .",temp,a,a,temp);

  return 0;
  
}