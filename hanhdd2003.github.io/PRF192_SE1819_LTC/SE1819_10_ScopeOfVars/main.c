#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n = 10;

void f1(){
	printf("Value of n = %d \n", n);
}

int sum(int a, int b){

	return (a+b);
	
}

void calc(int a, int b, int *sum, int *diff, int *multiply, double *divide){
	*sum = a+b;
	*diff = a-b;
	*multiply = a*b;
	*divide = (double) a/b;
}

int main(int argc, char *argv[]) {
	
	//printf("Value of n = %d\n", n);
	int a=8, b=5;
	int *tong, *hieu, *tich;
	double *thuong;
	calc(a, b, &tong, &hieu, &tich, &thuong);
	printf("%d + %d = %d\n", a, b, tong);
	printf("%d - %d = %d\n", a, b, hieu);
	printf("%d x %d = %d\n", a, b, tich);
	printf("%d / %d = %lf\n", a, b, thuong);
	
	return 0;
}
