#include<stdio.h>
void main()
{
    long year;
    printf("Enter a year:-\n");
    scanf("%ld",&year);
    if((year%400==0) || (year%4==0 && year%100!=0) ){
        printf("%ld is a leap year",year);
    }
    else{
        printf("%ld is not a leapyear",year);
    }
}
