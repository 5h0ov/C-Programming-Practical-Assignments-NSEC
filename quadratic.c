#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,x1=0.0,x2=0.0;
    printf("Enter the value of a, b and c below:-\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0.0 && b==0.0)
    {
        printf("No Solution");
    }
    else if(a==0.0)
    {
        printf("Only one root = %f",(-c/b));
    }
    else if(((b*b)-(4.0*a*c))<0.0)
    {
        printf("No real roots");
    }
    else{
        x1=(-b+sqrt((b*b)-4.0*a*c))/(2.0*a);
        x2=(-b-sqrt((b*b)-4.0*a*c))/(2.0*a);
        printf("There are two roots which are %f and %f respectively",x1,x2);
    }
}
