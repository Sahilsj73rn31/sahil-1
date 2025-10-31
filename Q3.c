#include<stdio.h>
#include <string.h>
int main()
{
  float a,b;
  char gender[10];
// learn string and then come back//
  printf("Are you a BOY/GIRl/TRANS/OTHER");
  scanf(" %s", gender);

  if(strcmp(gender, "BOY") == 0 || strcmp(gender,"boy") ==0 ||strcmp(gender , "GIRL") == 0 ||strcmp(gender ,"girl") == 0 )
  {

    printf("Please enter your first number 'a'.\n");
    scanf("%f", &a);


    printf("Please enter your second number 'b'. (which is greater than the first number ;) )\n");
    scanf("%f", &b);

    if(a>b)
    {
      printf("I think I was clear when I said 'b' should be greater than \"a\" :)\n");
      printf("Anyway the answer is '%f' is greater than '%f' as you have entered.\n (Irrespective of what i said to you to make my work easy ;)\n", a,b);


    }
    else if (a<b)
    { 
      getchar();
      printf("Thats like a good %s ;)\n",gender);
      printf("The correct answer is '%f' is greater than '%f' (Always listen to DADDY ;)\n", b,a);
      
    }
    else if (a==b)
    {
      printf("Don't try to out smart ME :)\n");
      printf("BOTH are the same shiiii..........stufffff. :)\n ");
      printf("TRY AGAIN DUMBO!!\n");

    }
    else
    {
      printf("null");
    }
  }
  else
  {
    printf("BETTER LUCK NEXT LIFE !!");

  }

  return 0;

}