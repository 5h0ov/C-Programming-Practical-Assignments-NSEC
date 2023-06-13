#include <stdio.h>
void main()
{
    int i,j,n,max,second_max;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers below:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max) 
            second_max = arr[i];
    }
    printf("The second highest number in the given array is %d.",second_max);
}