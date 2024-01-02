#include<stdio.h>
int main()
{
    int i,sum=0,n,a,m;
    scanf("%d",&n);
    a=n*n;
    m=n;
    while(a>0)
    {
        i=a%10;
        sum=sum+i;
        a=a/10;
    }
    if(sum==m)printf("Neon Number");
    else printf("Not Neon Number");
}