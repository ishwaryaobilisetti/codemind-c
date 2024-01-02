#include<stdio.h>
int main()
{
 int num,r,n,t,rev=0;
    scanf("%d",&num);
    t=num;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(rev==t)
    {
    printf("True");
    }
    else 
    {
    printf("False");
    }
}