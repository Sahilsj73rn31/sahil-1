#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
  
  char s[100];
  int vol =0 ;
  int con = 0;
  int i=0;

  printf("Please enter the word.\n");
  fgets(s, sizeof(s), stdin);

  while(s[i] != '\0')
  {
    char ch = tolower(s[i]);

    if(ch>= 'a' && ch<= 'z')
    {
      if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vol++;

      }
      else
      {
        con++;
      }

    }
    else
    {
      printf("null");
    }

    i++;

  }

  printf("The numbers of vowels in the word %s is %d.\n", s,vol);
  printf("The numbers of consonants in the word %s is %d.\n",s,con);

  return 0;

}
