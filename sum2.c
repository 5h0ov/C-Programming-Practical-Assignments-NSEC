#include<stdio.h>
void main()
{
    int f=1,n,i,c=1,j;
    float sum=0.0f;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=1;
        for(j=1;j<=c;j++)
            f=f*j;
        if(i%2==0)
            sum=sum+(1.0/f);
        else
            sum=sum-(1.0/f);
        c=c+2;
    }
    printf("The required sum is: %0.2f",sum);
}