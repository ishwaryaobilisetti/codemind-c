#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
 char a[100001];
 scanf("%[^
]",&a);
 printf("%d",strlen(a));
}