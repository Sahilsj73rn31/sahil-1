#include<stdio.h>
int main()
{
  int year;

  printf("Please enter your year.\n");
  scanf("%d",&year);

  if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
  {
    printf("The year you entered is a LEAP YEAR!\n");

  }
  else
  {
    printf("The year you entered is not a LEAP YEAR.");
  }

  return 0;
}