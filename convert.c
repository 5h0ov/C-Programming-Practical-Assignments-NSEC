#include<stdio.h>
void main()
{
    int mon, days;
    printf("Enter the number of days\n");
    scanf("%d",&days);
    mon=days/30;
    days=days%30;
    printf("mon=%d\ndays=%d", mon, days);
}