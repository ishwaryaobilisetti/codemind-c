#include<stdio.h>
int main()
{
int i,a,count=0;
scanf("%d",&a);
int arr[a];
for(i=0;i<a;i++)
{
 scanf("%d",&arr[i]);  
}
int num;
scanf("%d",&num);
for(i=0;i<a;i++)
{
 if(num==arr[i])
 count++;
}
printf("%d",count);
}