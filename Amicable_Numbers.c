#include<stdio.h>
int main()
{
    int n=0,i,a,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
      if(a%i==0)
      {
          n=n+i;
      }
    }
    if(n==b)printf("Amicable");
    else printf("Not Amicable");
}