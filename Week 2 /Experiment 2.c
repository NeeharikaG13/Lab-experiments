#include<stdio.h>
int main()
{
  float c,f;
  // c is celsius
  // f is farenheit
  printf("\n Enter the temperature in celsius");
  scanf("%f",&c);
  f=(c*(9.0/5.0))+32;
  printf("\n Temperature in farenheit is %f",f);
  // convert back to celsius
  c=(f-32)*(5.0/9.0);
  printf("\n Temperature in celsius is %f",c);
  return 0;
}
