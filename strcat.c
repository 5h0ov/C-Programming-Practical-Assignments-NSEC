#include<stdio.h>
#include<String.h>
void main()
{
    int i,j=0,x,y,temp;
    char s1[100],s2[100],s3[100];
    printf("Enter two strings one by one below:-\n");
    gets(s1);
    gets(s2);
    //the first string
    for(i=0;s1[i]!=0;i++,j++) 
        s3[j] = s1[i];
    //the second string
    for(i=0;s2[i]!=0;i++,j++) 
        s3[j] = s2[i];
    s3[j] = '\0';
    printf("The required concatenated string is: %s",s3);
}