#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x%2==0)
{
printf("%d",x);
}
else
{
x=--x;
printf("%d",x);
}
return 0;
}
