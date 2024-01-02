#include<stdio.h>
int main()
{
    int i,num,prenum,large=0;
    scanf("%d",&num);
    while(num>0)
    {
        prenum=num%10;
        if(prenum>large)
        {
            large=prenum;
        }
    num=num/10;
    }
printf("%d",large);
}