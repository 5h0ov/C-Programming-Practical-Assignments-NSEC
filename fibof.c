#include <stdio.h>
void fibo(int n)
{
    int i, t1 = 1, t2 = 1, nextTerm;
    printf("0 ");
    for (i = 1; i < n; ++i)
    {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}
void main()
{
    int x;
    printf("Enter the number of terms: ");
    scanf("%d", &x);
    printf("Fibonacci Series: ");
    fibo(x);
}