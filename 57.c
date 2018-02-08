#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d",&a,&b);
printf("enter the number: %d %d",a,b);
c=a;
a=b;
b=c;
printf("the value is: %d %d",a,b);
return 0;
}
