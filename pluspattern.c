#include<stdio.h>
int main()
{
    int n=0,m=0;
    printf("Enter odd no of rows \n");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if((i==n/2+1) || (j==n/2+1))
                printf("*");
            else
                printf(" ");
        }
        
          printf("\n"); 
    }
    return 0;
    
}