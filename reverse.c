#include<stdio.h>
#include<stdlib.h>
void main()
{
     int n,a,d,c=0,rev=0;
    printf("Enter a 5-digit number: ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        c++;
        d=n%10;
        rev= rev*10 + d;
        n/=10;
    }
     if(c<5 || c>5)
    {
        printf("Invalid Input! %d is not a 5 digit number!",a);
        exit(1);
    }
    printf("The requied reverse of %d is %d.",a,rev);
}