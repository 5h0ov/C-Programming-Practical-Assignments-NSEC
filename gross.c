#include <stdio.h>

int main(){
	printf("Enter the basic DA, HRA, Medical Allowance :- \n");
	float basic,hra,med,da;
	scanf("%f %f %f %f",&basic,&da,&hra,&med);
	printf("Gross Salary : %f",basic+da+hra+med);
}
