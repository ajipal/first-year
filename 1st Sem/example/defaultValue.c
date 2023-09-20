#include <stdio.h>

int sum(int a, int b=20){
		int result;
		result = a + b;
		
		return (result);
	}
	
int main()
{
		int a = 100, b = 200, result;
		
		result = sum(a,b);
		printf("Total value is %d\n", result);
		
		result = sum(a);
		printf("Total value is %d", result);
		
		return 0;
	
}
