#include<stdio.h>
int area(int l,int b)
{
if(b==1)
return l;
else
return l+area(l,b-1);
}
int main()
{
int l,b,i=0,cost,a;
printf("enter the length and breadth of the room:");
scanf("%d",&l);
scanf("%d",&b);
a=area(l,b);
cost=200*a;
printf("the total cost is%d",cost);
return 0;
}
