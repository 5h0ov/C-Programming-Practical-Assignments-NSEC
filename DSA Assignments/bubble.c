#include<stdio.h>
#include<stdlib.h>
void main() //bubble sort
{
    int i,j,k,x,swap, *a=NULL;
    printf("Enter the size of the array: ");
    scanf("%d",&x);
    a=(int *)malloc(x * sizeof(int)); //Dynamically allocated the array
    printf("Enter the numbers to be sorted in the array below:-\n");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x-1;i++)
    {
        printf("Pass %d:\n",i);
        for(j=0;j<x-i-1;j++)
        {
                if(a[j] > a[j+1])
                {
                    swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;
                }
                for(k=0;k<x;k++)  // Displaying Pass
                {
                    if(k==j)
                        printf("<%d> ",a[k]);
                    else
                        printf("%d ",a[k]);
                }
                printf("\n");
        }
    }
    printf("The sorted array: ");
     for(i=0;i<x;i++)
        printf("%d ",a[i]);

    free(a);
}