#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter The Value A :-");
	scanf("%d", &a);
	
	printf("Enter The Value B :-");
	scanf("%d", &b);

	 c=a, a=b, b=c;
	
	printf("\nA = %d",a);
	printf("\nB = %d",b);
}
