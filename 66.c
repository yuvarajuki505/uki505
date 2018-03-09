#include<stdio.h>
int main()
{
int i,n,a=0;
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
a++;
break;
}
}
if(a=0)
printf("num is prime");
else
printf("num is not a prime");
return 0;
}
