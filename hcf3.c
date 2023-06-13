#include<stdio.h>
void main()
{
    int a,b,temp,hcf,n1,n2;
    printf("Enter two numbers below:-\n");
    scanf("%d%d",&a,&b);
    n1=a;
    n2=b;
    if(b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    hcf=temp;
    printf("The required hcf of %d and %d is %d.",n1,n2,hcf);
}