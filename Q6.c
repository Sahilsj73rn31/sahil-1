#include<stdio.h>

int main()
{

  int i,a;
  int first = 0 ,second =1 ,next ;
  
  
  
  printf("Please enter the number till which you want to print the e Fibonacci series 'a'.\n ");
  scanf("%d", &a);
  
 
  
  for(i=1; i<=a; i++)
  {
    printf("%d",first);

    next = first +second;
    first = second;
    second = next;
    
   
   
  }
  return 0;
}