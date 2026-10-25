#include<stdio.h>
#include<math.h>
int main()
{
  double u,t,a,d;
  /* u is initial velocity
     t is  displacement time
     a is acceleration 
     d is distance */ 
  printf("\n Enter u,t,a");
  scanf("\n %lf%lf%lf",&u,&t,&a);
  d=(u*t)+(0.5*a*t*t);
  printf("\n The distance is %lf",d);
  return 0;
}
