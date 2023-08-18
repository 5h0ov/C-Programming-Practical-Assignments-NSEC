#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,n,sq;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The prime numbers between 1 and %d are: ",n);
    for(i=2;i<=n-1;i++)
    {
        sq=sqrt(i);
        for(j=2;j<=sq;j++)
        {
        if(i%j==0)
            break;
        }
        if(j==(sq+1))
            printf("%d ",i);
    }
}
