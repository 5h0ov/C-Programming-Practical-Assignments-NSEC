#include<stdio.h>
void main()
{
    int i,j,x,n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
     for(i = 1; i <= n; i++) 
     {
        for(j = 1; j <= n; j++) 
        {
            if(i == j || i == (n - j + 1)) 
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
}