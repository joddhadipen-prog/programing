#include <stdio.h>
int main()
{
float kg,grams;
printf("enter weight in grams: ");
scanf("%f", &grams );
kg=grams/1000;
printf("weight in killograms is:- %.2f",kg);
return 0;
}
