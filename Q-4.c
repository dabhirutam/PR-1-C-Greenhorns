#include<stdio.h>

int main(){
	
	int  base_salary;
	float hra,da,ta,gross_salary;
	
	printf("\nEnter Base Salary :- ");
	scanf("%d", &base_salary);
	
	printf("Enter HRA :- ");
	scanf("%f", &hra);
	
	printf("Enter DA :- ");
	scanf("%f", &da);
	
	printf("Enter TA :- ");
	scanf("%f", &ta);

	 hra = (base_salary *  hra) / 100;
	 da = (base_salary * da) / 100;
	 ta = (base_salary * ta) / 100;
	
	gross_salary = base_salary + hra + da + ta;
	
	printf("\nGross Salary = %.2f RS", gross_salary);

	return 0;
}
