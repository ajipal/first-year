#include <stdio.h>

int max(int, int);	//function declaration/prototype

int main(){
	int a, b, c, d; //variable declaration
	
	printf("Enter first number>> ");
	scanf("%d", &a);
	printf("Enter second number>> ");
	scanf("%d", &b);
	printf("Enter third number>> ");
	scanf("%d", &c);
	//printf("Enter fourth number>> ");
	//scanf("%d", &d);
	
	int ret1 = max(a,b); 			//calling the function max
	int ret2 = max(ret1,c); 			//caling the function max
	int retfin = max(ret1, ret2); 	//calling the function max
	
	printf("\n=========================\n\n");
	printf("Max value is>> %d", retfin);
	
	return 0;
}

int max(int num1, int num2){
	if(num1 > num2){
		return num1;
	}else{
		return num2;
	}
}
