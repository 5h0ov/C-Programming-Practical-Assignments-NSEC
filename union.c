#include<stdio.h>
union abc
{
    int x;
    char a[2];
}s;

void main()
{
   s.x=512;
   printf("%d%d", s.a[0],s.a[1]); 
}
