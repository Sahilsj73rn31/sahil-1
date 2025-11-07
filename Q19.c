#include<stdio.h>

int main()
{
  int n,i,sum=0;

  printf("Please enter the number of elements:\n");
  scanf("%d",&n);

  int arr[n];

  printf("enter %d element.\n",n);

  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }

  for(i=0;i<n;i++){
    sum+=arr[i];
  }

  printf("The sum of number is %d",sum);

  return 0;

}
