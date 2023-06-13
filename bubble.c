#include<stdio.h>
#include<stdlib.h>
void main() //bubble sort
{
    int i,j,x,swap,choice;
    printf("Enter 1 for Sorting in Ascending order\nEnter 2 for Sorting in Descending Order\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter the size of the array: ");
    scanf("%d",&x);
    int a[x];
    printf("Enter the numbers to be sorted in the array below:-\n");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x-1;i++)
    {
        for(j=0;j<x-i-1;j++)
        {
            if(choice==1)
            {
                if(a[j] > a[j+1])
                {
                    swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;
                }
            }
            else if(choice==2)
            {
                if(a[j] < a[j+1])
                {
                    swap=a[j];
                    a[j]=a[j+1];
                    a[j+1]=swap;
                }
            }
            else
            {
                printf("Invalid Input");
                exit(1);
            }
        }
    }
    if(choice==1)
    {
    printf("The sorted array in ascending order: ");
     for(i=0;i<x;i++)
        printf("%d ",a[i]);
    }
    if(choice==2)
    {
    printf("The sorted array in descending order: ");
     for(i=0;i<x;i++)
        printf("%d ",a[i]);
    }
}