#include<stdio.h>
void main()
{
    int i,j,s,n;
    printf("Enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(s=n-1;s>=i;s--)
            printf(" ");
         for(j = i; j <= 2*i-1; j++) 
        {
            printf("%d", j);
        }
        for(j = 2*i-2; j >= i; j--) 
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
}