#include<stdio.h>
#include<math.h>
int main()
{
  double p,r,t,ci,amount;
  /* p is principal amount
     r is rate of interest 
     t is time 
     ci is compound interest */
  printf("\n Enter the principal amount in rupees");
  scanf("%lf",&p);
  printf("\n Enter the rate of interest");
  scanf("%lf",&r);
  printf("\n Enter the time");
  scanf("%lf",&t);
  amount=p*((pow((1+r/100),t)));
  ci=amount-p;
  printf("\n The compound Interest is %lf",ci);
  return 0;
}
