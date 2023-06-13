#include<stdio.h>
#define MAX(x,y) ((x>y)?x:y)
void main()
{
    int a,b;
    printf("Enter two numbers below:-");
    scanf("%d%d",&a,&b);
    printf("The largest between %d and %d is %d.",a,b,MAX(a,b));
}