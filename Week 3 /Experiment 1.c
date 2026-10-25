#include<stdio.h>
#include<math.h>
int main()
{
  double n,result;
  // n is number
  printf("\n Enter a number to find its square root");
  scanf("%lf",&n);
  result=sqrt(n);
  printf("\n The square root of number %.2lf is %.2lf",n,result);
  // Here .2 is used to define result upto 2 decimals
  return 0;
}
