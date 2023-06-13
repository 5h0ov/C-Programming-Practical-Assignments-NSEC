#include<stdio.h> 
 
int main()
{
    int i;
    char enter[5];
     for(int i=0;i<5;i++)
     {
        printf("Enter the character %d: ",i+1);
        scanf("%c",&enter[i]);
        getchar();
     }  
    for(i=0;i<5;i++)
    {
        printf("%c",enter[i]);
    }
    return 0;
}