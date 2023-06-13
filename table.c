#include<stdio.h>
void main()
{
   for(int n=1;n<=10;n=n+3)
   {
        for(int i=1;i<=10;i++)
            printf("%d X %d = %d\t%d X %d = %d\t%d X %d = %d\n",n,i,n*i,(n+1),i,(n+1)*i,(n+2),i,(n+2)*i);
            printf("\n");
   }
}
