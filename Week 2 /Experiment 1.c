#include<stdio.h>
int main()
{
  int a,b,c;
  int sum;
  float avg;
  printf("\n Enter a,b,c");
  scanf("%d%d%d",&a,&b,&c);
  sum = a+b+c;
  printf("\n The sum of %d,%dand%d is %d",a,b,c,sum);
  avg=(float)sum/3;
  printf("\n The average is %f",avg);
  return 0;
}
