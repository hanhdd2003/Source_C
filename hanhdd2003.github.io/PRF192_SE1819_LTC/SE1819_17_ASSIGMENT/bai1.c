#include <stdio.h>
#include <stdlib.h>
/*B�i 1: nhap b�n k�nh hinh trin dang so 
thuc (v� du 5.67), t�nh v� hien thi chu 
vi v� b�n k�nh hinh tron (lay den 3 chu 
so le phan thap ph�n) (v� du 82.249)*/
int main(){
	double a, pi=3.14, perimeter;
	printf("Please enter radius: ");
	scanf("%lf", &a);
	perimeter = a*2*3.14;
	printf("\nPerimeter of %.3lf is: %.3lf", a, perimeter);
}
