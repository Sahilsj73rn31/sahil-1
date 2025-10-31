#include<stdio.h>
int main()
{
  int a,b,c;

  printf("Please enter your first number 'a'.\n");
  scanf("%d",&a);

  printf("Please enter your second number 'b'.\n");
  scanf("%d",&b);

  printf("Please enter your third number 'c'.\n");
  scanf("%d",&c);


  if( a>b && a>c)
  {
    printf("The first number %d you entered is greater than the rest of the number", a);

  }
  else if(b>a && b>c)
  {
     printf("The second number %d you entered is greater than the rest of the number", b);
  }
  else if (c>a && c>b)
  {
     printf("The third number %d you entered is greater than the rest of the number", c);
  }
  else if (a == b && a,b>c)
  {
     printf("The first and second number '%d' and '%d' you entered are equal and greater than the third number", a,b);
  }
   else if (a == b && a,b<c)
  {
     printf("The first and second number '%d' and '%d' you entered are equal and lesser than the third number", a,b);
  }
   else if (a == c && a,c>b)
  {
     printf("The first and third number '%d' and '%d' you entered are equal and greater than the second number", a,c);
  }
   else if (a == c && a,c<b)
  {
     printf("The first and third number '%d' and '%d' you entered are equal and lesser than the second number", a,c);
  }
   else if (b == c && c,b>a)
  {
     printf("The second and third number '%d' and '%d' you entered are equal and greater than the first number", b,c);
  }
   else if (b == c && b,c<a)
  {
     printf("The second and third number '%d' and '%d' you entered are equal and lesser than the first number", b,c);
  }
   else
  {
     printf("The first and second and third number '%d' and '%d' and '%d' you entered are equal ", a,b,c);
  }
 

  return 0;

}