#include<stdio.h>
int main()
{
  int i,j,k;
  printf("\n Enter value of i");
  scanf("%d",&i);
  printf("\n Enter value of j");
  scanf("%d",&j);
  printf("\n Enter value of k");
  scanf("%d",&k);
  (i>j)?(i>k)?printf("%d is largest",i):printf("%d is largest",k):(j>k)?printf("%d is largest",j):printf("%d is largest",k);
  return 0;
}
