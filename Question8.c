#include<stdio.h>
int main() {
    int dollar,inr;
    printf("enter amount in dollar: ");
    scanf("%d", &dollar);

    inr = dollar * 48;

    printf("amount in inr is:- %d",inr);
    return 0;
}
