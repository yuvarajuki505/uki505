#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("before swap value: %d %d \n",a,b);
{
a=a^b;
b=a^b;
a=a^b;
}
printf("after swap value: %d %d \n",a,b);
retrun 0;
}
