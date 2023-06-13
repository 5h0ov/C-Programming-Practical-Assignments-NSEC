#include<stdio.h>
void main()
{
    int i,j,s,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=n-1;s>=i;s--)
            printf("  ");

        for(j = 1; j <= i; j++) 
            printf("%d ", j);
        for(j = i-1; j >= 1; j--) 
            printf("%d ", j);

        printf("\n");
    }
}