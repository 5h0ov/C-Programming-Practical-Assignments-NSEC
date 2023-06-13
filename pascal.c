#include <stdio.h>
void main()
{
    int rows,c,i,j,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for (i = 1; i <= rows; i++) 
    {
        for (j = 0; j < rows - i; j++) 
            printf(" ");
        c = 1; 
        for (k = 1; k <= i; k++) 
        {
            printf("%d ", c);
            c = c * (i - k) / k;
        }
        printf("\n");
    }
}