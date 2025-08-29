#include<stdio.h>
int main() {
    int dollar,rupees;
    printf("enter amount in rupees: ");
    scanf("%d", &rupees);

    dollar = rupees / 48;

    printf("amount in dollar is:- %d",dollar);
    return 0;
}
