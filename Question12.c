#include<stdio.h>
int main()
{
float kg,grams;
printf("enter weight in kg: ");
scanf("%f", &kg);
grams=kg*1000;
printf("weight in grams is:- %.2f",grams );
return 0;
}
