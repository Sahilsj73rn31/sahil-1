#include<stdio.h>
int main()
{
  int a;
   printf("Please enter the number 'a'. \n");
   scanf("%d",&a);

   if(a%2 == 0)
   {
    printf("The number you entered '%d' is an EVEN number. ",a);

   }
   else
   {
    printf("The number you entered '%d' is an ODD number. ",a);

   }
   return 0;
}