#include<stdio.h>
 int main()
{
int a,b,temporary;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
temporary=a;
a=b;
b=temporary;
printf("after swapping:\n");
printf("a=%d\n",a);
printf("b=%d\n",b);
return 0;
}
