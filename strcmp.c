#include<stdio.h>
#include<String.h>
#include<stdlib.h>
void main()
{
    int i,x=0,y=0;
    char s1[100],s2[100];
    printf("Enter two strings one by one below:-\n");
    gets(s1);
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
        x++;
    for(i=0;s2[i]!='\0';i++)
        y++;
    for(i=0;i<x && s1[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            printf("The two strings are not equal.");
            exit(1);
        }
        else
            continue;
    }
    printf("The two strings are equal.");
}