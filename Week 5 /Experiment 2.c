#include<stdio.h>
int main()
{
  float a;
  printf("enter number of units consumed ");
  scanf("%f",&a);
  if(a>=1 && 100>=a)
  {
    printf("bill=%.2f",a*1.5);
  }
  else if(a>=101 && 200>=a)
  {
    printf("bill=%.2f",a*2.5);
  }
  else if(a>=201 && 500>=a)
  {
    printf("bill=%.2f",a*4.0);
  }
  else if(a>500)
  {
    printf("bill=%.2f",a*6.0);
  }
  else
  {
    if(a==0)
     printf("bill=0");
    else
    printf("not valid input");
  }   
  printf("\nEnd of program");
  return 0;
}
