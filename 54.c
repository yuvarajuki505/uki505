#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%2==0)
{
printf("%d",a);
}
else
{
a=--a;
printf("%d",a);
}
return 0;
}
