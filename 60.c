#include<stdio.h>
int main()
{
int i,n,a,t1=0,t2=1;
scanf("%d"&n);
for(i=1;i<=n;++i)
{
printf("%d",t1);
a=t1+t2;
t1=t2;
t2=a;
}
return 0;
}
