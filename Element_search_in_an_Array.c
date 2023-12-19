#include<stdio.h>
int main()
{
int i,a,num,flag=0;
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&num);
for(i=0;i<a;i++)
{
if(num==arr[i])
flag++;
}
if(flag>0)
printf("True");
else
printf("False");
}