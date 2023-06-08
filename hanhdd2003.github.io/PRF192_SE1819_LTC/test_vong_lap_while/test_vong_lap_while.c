#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	while (n>0){
		sum += n%10;
		n /= 10;	
	}
	printf("sum = %d", sum);
	return 0;
}
