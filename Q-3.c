#include<stdio.h>

main(){
	
	int c;
	
	printf("Enter the temperature in Celsius :-");
	scanf("%d", &c);
	
	float fahrenheit = c * 9/5 + 32;
	
	printf("\nTemperature from Fahrenheit = %.2f", fahrenheit);
}
