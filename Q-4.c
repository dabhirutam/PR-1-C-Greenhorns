#include<stdio.h>

main(){
	
	int  base_salary,hra,da,ta,gross_salary;
	
	printf("Enter Base Salary :-");
	scanf("%d", &base_salary);
	
	printf("Enter HRA :-");
	scanf("%d", &hra);
	
	printf("Enter DA :-");
	scanf("%d", &da);
	
	printf("Enter TA :-");
	scanf("%d", &ta);
	
	gross_salary = base_salary + hra + da + ta;
	
	printf("\nGross Salary = %d RS", gross_salary);
}
