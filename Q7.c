#include<stdio.h>
int main()
{
  int a;
  int i ;
  int isprime;


  printf("Please enter your number 'a'.\n");
  scanf("%d",&a);
  if(a<=1)
  {
    printf("The number you entered '%d' cannot be classified . ",a);

    return 0;

  }
  
  for( i = 2 ; i*i <= a; i++)
  {
    if(a%i==0)
    {
      isprime = 0;
      break;
    }

  }
  if (isprime)
  {
    printf("The number you entered '%d' is a prime number.",a);

  }
  else
  {
    printf("The number you entered '%d' is not a prime number.",a);
  }
  
  
  return 0;
}