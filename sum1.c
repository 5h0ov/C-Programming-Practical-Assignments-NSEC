#include<stdio.h>
void main()
{
    int n,i;
    float sum=0.0f;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+ (1.0/i);
    }
    printf("The required sum is: %.2f",sum);
}