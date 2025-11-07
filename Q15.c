#include<stdio.h>

int main()
{
  int a,b,temp;

  printf("Please enter two number:\n");
  scanf("%d %d",&a,&b);

  int num1=a;
  int num2=b;

  while(b!=0)
  {
    temp=b;
    b=a%b;
    a=temp;


  }

 int gcd=a;

 printf("The GCD of both the number %d and %d is %d",num1,num2,gcd);

 return 0;

}
