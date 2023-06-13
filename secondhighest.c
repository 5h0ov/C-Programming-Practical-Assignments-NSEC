#include <stdio.h>
void main() 
{
    int a, b, c;

    // Read three integers from user
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    // The second largest number:-
    int x;
    if (a >= b && a >= c) 
    {
        if (b >= c)
         {
            x = b;
        }
        else 
        {
            x = c;
        }
    } 
    else if (b >= a && b >= c) 
    {
        if (a >= c) 
        {
            x = a;
        } 
        else 
        {
            x = c;
        }
    } 
    else
    {
        if (a >= b) 
        {
            x = a;
        } 
        else 
        {
            x = b;
        }
    }

    // Print the second largest number
    printf("The second largest number is %d.", x);
}