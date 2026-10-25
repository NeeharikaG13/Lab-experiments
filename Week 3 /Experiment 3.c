#include<stdio.h>
#include<math.h>
int main()
{
  double a,b,c,area,s;
  //a,b,c are sides
  printf("\n Enter a,b,c in cm");
  scanf("\n %lf%lf%lf",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("\n The area of triangle using herons formula is %lf cm square",area);
  return 0;
}
