#include<stdio.h>
int main()
{
float gross,discount,net;
printf("enter gross sales:\n");
scanf("%f",&gross);
discount=gross*0.10;
net=gross-discount;
printf("net sales=%f",net);
return 0;
}
