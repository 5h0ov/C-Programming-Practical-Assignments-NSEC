#include<stdio.h>
void main()
{
    int a,b,m,n;
    printf("Enter two numbers below:-\n");
    scanf("%d%d",&a,&b);
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    printf("The required hcf of %d and %d is %d.",a,b,n);
}