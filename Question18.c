#include<stdio.h>
 int main()
{
int l,b,a,p;
printf("enter length and breadth of a rectangle");
scanf("%d %d", &l,&b);
a=l*b;
p=2*(l+b);
printf("perameter of rectangle is %d\n",p);
printf("area of rectangle is %d\n", a);
return 0;
}
