#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,k,n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
     for(i = -n+1; i < n; i++) 
     {
        for(j = -n+1; j < n; j++) 
        {
            k= abs(i)+ abs(j);
            if((k == 0 || k == n-1) && (k!=n/2)) 
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
}