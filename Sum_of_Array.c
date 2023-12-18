#include<stdio.h>
int main()
{
  int i,a,sum=0;
  int arr[a];
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0;i<a;i++)
  {
      sum+=arr[i];
  }
  printf("%d",sum);
}