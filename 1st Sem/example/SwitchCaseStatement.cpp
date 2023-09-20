// Program to create a simple calculator

#include <stdio.h>

main() {

	char _operator;
	double n1, n2;
	
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &_operator);
	printf("Enter two operands: ");
	scanf("%lf %lf", &n1, &n2);

	
	switch(_operator)
	{
		case '+':
			printf("%.1lf +%.1lf = %.1lf", n1, n2, n1+n2);
			break;
			
		case '-':
			printf("%.1lf - %.1lf = %.1lf", n1, n2, n1-n2);
			break;
			
		case '*':
			printf("%.1lf * %.1lf = %.1lf", n1, n2, n1*n2);
			break;	
			
		case '/':
			printf("%.1lf / %.1lf = %.1lf", n1, n2, n1/n2);
			break;
			
		default:
				printf("Error! operator is not correct");
	}
	
}


