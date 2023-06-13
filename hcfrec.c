#include<stdio.h>
void main()
{
    int hcf(int,int);
    int a,b;
    printf("Enter two numbers below:-\n");
    scanf("%d%d",&a,&b);
    printf("The required HCF between %d and %d is %d.",a,b,hcf(a,b));
}
int hcf(int a, int b)
{
    if (b == 0)
        return a;
    else 
        return hcf(b, a % b);
}