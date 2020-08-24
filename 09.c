#include<stdio.h>

void main(){
	float number1, number2, number3;
	
	printf("Enter number 1 : ");
	scanf("%f", &number1);
	printf("Enter number 2 : ");
	scanf("%f", &number2);
	printf("Enter number 3 : ");
	scanf("%f", &number3);
	printf("%.2f \n%.2f \n%.2f", number1, number2, number3);
}
