#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    int second_largest = (a>b) ? ((b>c) ? b : ((a>c) ? c : a)) : ((a>c) ? a : ((b>c) ? c : b));
    printf("The second largest number is %d", second_largest);
}
