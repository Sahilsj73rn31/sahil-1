#include <stdio.h>
int main()
{
  float r;
  float area;
  const float PI=3.14;

  printf("Please enter the radius of the circle.\n");
  scanf("%f",&r);

  area = PI*r*r;

  printf("The area of the circle with radius '%f' is %f ", r,area);
  
  return 0;


}