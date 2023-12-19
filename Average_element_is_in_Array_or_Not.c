#include<stdio.h>
int main()
{
int i,a,sum=0;
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<a;i++)
{
sum+=arr[i];
}
int avg=sum/a;
int flag=0;
for(i=0;i<a;i++)
{
if(avg==arr[i])
{
flag++;
}
}
if(flag>0)
printf("True");
else
printf("False");
}