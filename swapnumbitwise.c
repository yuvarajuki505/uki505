#include<stdio.h>
int main()
{
int x=05,y=50;
x=x+y;
y=x-y;
x=x-y;
printf("after swap");
printf("x=%d",x);
printf("y=%d",y);
return 0;
}
