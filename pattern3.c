#include<stdio.h>
void main()
{
    int i,j,s,x=1,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=n-1;s>=i;s--)
            printf("  ");
        for(j=1;j<=x;j++)
            printf("* ");
        x=x+2;
        printf("\n");
    }
}