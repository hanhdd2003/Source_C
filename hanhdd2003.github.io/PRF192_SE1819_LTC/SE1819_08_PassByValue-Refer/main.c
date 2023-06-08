#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void power(int base, int exponent, int result){
	printf("result = %d", result);
	result = 1;
	int i = 1;
	for(i=1; i<=exponent; i++){
		result *= base;
	}
//	return result;
}

void swap(int a, int b){

	int temp = a;
	a = b;
	b = temp;
	printf("In swap: m = %d, n = %d\n", a, b);
}
void swapByRef(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
//	printf("In swap By Reference: m = %d, n = %d\n", *a, *b);
}
int main(int argc, char *argv[]) {
//	int base = 5, exp = 3;
//	int answer = power(base, exp);
//	printf("%d^%d = %d\n", base, exp, answer);
	
	int m = 5, n = 10;
	printf("Before swap: m = %d, n = %d\n", m, n);
	swap (m, n);
	printf("After swap: m = %d, n = %d\n", m, n);
	swapByRef(&m, &n);
	printf("After swap by reference: m = %d, n = %d\n",m, n );
	
	
	return 0;
}
