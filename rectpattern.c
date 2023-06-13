#include<stdio.h>
void main()
{
    int n=0,m=0;
    printf("Enter even no of rows and columns \n");
    scanf("%d%d",&n,&m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > 0 && i < n - 1 && j > 0 && j < m - 1) 
                printf("  ");
            else 
                printf("* ");
        }
        printf("\n"); 
    }    
}