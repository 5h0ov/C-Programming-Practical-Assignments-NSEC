#include<stdio.h>
void main()
{
    int fib(int);
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(i=0; i<n; i++) 
        printf("%d ", fib(i));

}
int fib(int x)
{
    if(x<=0)
        return 0;
    else if(x==1)
        return 1;
    else
        return(fib(x-1)+fib(x-2));
}