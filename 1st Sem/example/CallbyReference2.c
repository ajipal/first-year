#include <stdio.h>


void swap(int *x, int *y){
	*x = 200;
	*y = 100;
}


int main(){
	
	int a = 100, b = 200;
	
	printf("Before swap, value of a is: %d\n", a);
	printf("Before swap, value of b is: %d\n", b);
	printf("\n================================\n\n");
	
	swap(&a,&b);
	
	printf("After swap, value of a is: %d\n", a);
	printf("After swap, value of b is: %d\n", b);
	
	return 0;
}
