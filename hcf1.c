#include<stdio.h>
void main()
{
    int i,a,b,hcf;
    printf("Enter two numbers below:-\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
            hcf=i;
    }
    printf("The required hcf between %d and %d is %d.",a,b,hcf);
}