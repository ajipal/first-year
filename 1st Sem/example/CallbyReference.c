#include <stdio.h>

void swap(int *x, int *y){			//formal parameter
	int temp;
	
	temp = *x;	//temp = 100
	*x = *y;	//x=200
	*y = temp;	//y=100
	
}
int main(){
	
	int a = 100, b = 200;
	
	printf("Before swap, value of a is: %d\n", a);
	printf("Before swap, value of b is: %d\n", b);
	printf("\n================================\n\n");
	
	swap(&a,&b);			//actual parameter
	
	printf("After swap, value of a is: %d\n", a);
	printf("After swap, value of b is: %d\n", b);
	
	return 0;
}



