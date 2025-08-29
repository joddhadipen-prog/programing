#include<stdio.h>
int main() {
    int dollar,pounds,rupees;
    printf("enter amount in dollar: ");
    scanf("%d", &dollar);

    pounds = (dollar * 48) / 70;

    printf("amount in pounds is:- %d",pounds);
    return 0;
}
