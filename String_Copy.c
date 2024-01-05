#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char s[1000001];
char x[1000001];
scanf("%[^
]",s);
strcpy(x,s);
x[1000001]==NULL;
printf("%s",x);
}