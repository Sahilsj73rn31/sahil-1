#include<stdio.h>
int main()
{
  float C,F;

  printf("Please enter the temperature.\n");
  scanf("%f",&C);

  F=(C*9/5)+32;

  printf("The temperature '%f'C in fahrenheit is %f ",C,F);


  return 0;
}