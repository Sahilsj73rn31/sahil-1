#include<stdio.h>
int main()
{
  int a,b,c;


  printf("WElcome to table print.\n");
  printf("Please enter the number you want to print the table of 'a' \n");
  scanf("%d",&a);
  printf("Please enter the number till which you want to print the table of 'c'\n");
  scanf("%d",&c);

  for(b = 1; b <= c  ; b++)
  {
    printf("%d x %d = %d\n",a,b, a*b);

  }

  return 0;
}