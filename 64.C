#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d",&a,&b);
printf("enter the number: ");
c=a+b;
printf("%d",c);
if(c%2==0)
{
printf("even");
}

else
{
printf("odd");
}
return 0;
}

