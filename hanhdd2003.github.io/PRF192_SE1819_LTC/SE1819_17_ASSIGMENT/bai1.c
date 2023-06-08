#include <stdio.h>
#include <stdlib.h>
/*Bài 1: nhap bán kính hinh trin dang so 
thuc (ví du 5.67), tính và hien thi chu 
vi và bán kính hinh tron (lay den 3 chu 
so le phan thap phân) (ví du 82.249)*/
int main(){
	double a, pi=3.14, perimeter;
	printf("Please enter radius: ");
	scanf("%lf", &a);
	perimeter = a*2*3.14;
	printf("\nPerimeter of %.3lf is: %.3lf", a, perimeter);
}
