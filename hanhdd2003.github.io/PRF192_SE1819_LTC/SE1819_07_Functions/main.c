#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum(int num1, int num2){
//	int result = 0;
//	result = num1 + num2;
//	return result;
	return num1 + num2;
}
//void sum(int num1,int num2){
//	int result = 0;
//	result = num1 + num2;
//	printf("Sum of %d + %d equal to %d\n", num1, num2, result);
//}

int main(int argc, char *argv[]) {
	int a ,b;
	printf("a = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	int tong = sum(a, b);
	printf("%d + %d = %d", a, b, tong);
//	sum(a,b);
	return 0;
}
