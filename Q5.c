#include<stdio.h>
int main()
{
  int num,a;
  int pro=1;

  printf("Please enter your number.\n");
  scanf("%d",&a);
  
    if (a > 0)
    {
      
      for(num=1; num <=a; num++)
      {
        pro*=num;
    
      }
        printf("The factorial of the number '%d' is %d",  a, pro);
    
    }
    else if (a==0)
    {
      printf("The factorial is 1.");

    }
  return 0;
}
