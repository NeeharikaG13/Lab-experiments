#include<stdio.h>
int main()
{
  int s1,s2,s3,s4,s5,total;
  float avg;
  printf("\n Enter marks of subject1");
  scanf("%d",&s1);
  printf("\n Enter marks of subject2");
  scanf("%d",&s2);
  printf("\n Enter marks of subject3");
  scanf("%d",&s3);
  printf("\n Enter marks of subject4");
  scanf("%d",&s4);
  printf("\n Enter marks of subject5");
  scanf("%d",&s5);
  total=s1+s2+s3+s4+s5;
  printf("\n The total of all subjects is %d",total);
  avg = total/5.0;
  printf("\n The average of 5 subjects is %f",avg);
  return 0;
}
