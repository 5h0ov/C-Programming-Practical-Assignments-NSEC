#include<stdio.h>
#include<String.h>
void main()
{
    int i,x=0;
    char a[100],b[100];
    printf("Enter the source string: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        x++;
    for(i=0;i<x;i++)   
        b[i]=a[i];
    b[i]='\0';
    printf("The copied string: ");
    puts(b);
}