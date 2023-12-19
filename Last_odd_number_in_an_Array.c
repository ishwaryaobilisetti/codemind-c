#include<stdio.h>
int main()
{
int i,a;
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
for(i=a-1;i>=0;i--)
{
if(arr[i]%2!=0)
break;
}
printf("%d",arr[i]);
}