#include<stdio.h>
void main()
{
  int a,b,c,d;
  printf("Enter the values of the sides: ");
  scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a>=1 && b>=1 && c>=1 && d>=1 && a<=1000 && b<=1000 && c<=1000 && d<=1000)
    {
    if((a==c && b==d) || (a==b && c==d) || (a==d && b==c))
        printf("Yes");
    else
        printf("No");  
    }
    else
        printf("Invalid Input");
}