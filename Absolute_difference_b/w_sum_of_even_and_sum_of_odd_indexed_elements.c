#include<stdio.h>
#include<math.h>
int main()
{
int i,a,esum,osum;
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<a;i++)
{
  if(i%2==0)
  esum+=arr[i];
  else
  osum+=arr[i];
}
printf("%d",abs(esum-osum));
}