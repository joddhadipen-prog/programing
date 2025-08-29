#include <stdio.h>
int main ()
{
int a,b;
int sum , mul , div , diff;
printf("enter two numbers");
scanf("%d %d", &a, &b);
sum=a+b;
diff=a-b;
mul=a*b;
div=a/b;
printf("%d+%d=%d\n",a,b,sum);
printf("%d-%d=%d\n",a,b,diff );
printf("%d*%d=%d\n", a, b, mul);
printf("%d/%d=%d\n",a,b,div);
return 0;
}
