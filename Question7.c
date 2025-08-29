#include<stdio.h>
int main() {
    int hours,minutes;
    printf("enter minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("%d hours is %d minutes\n", hours,minutes);
    return 0;
}
