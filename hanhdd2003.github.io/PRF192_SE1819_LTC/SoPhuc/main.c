#include <stdio.h>

struct Complex {
	double real;
	double imaginary;
};
	
// tinh tong 2 so phuc
struct Complex addComplex(struct Complex c1,struct Complex c2) {  
	struct Complex result;
	result.real = c1.real + c2.real;
	result.imaginary = c1.imaginary + c2.imaginary;
	return result;
}
// tinh hieu 2 so phuc
struct Complex subtractComplex (struct Complex c1,struct Complex c2){
	struct Complex result;
	result.real = c1.real - c2.real;
	result.imaginary = c1.imaginary - c2.imaginary;
	return result;
}
// tinh tich 2 so phuc
struct Complex multiplyComplex(struct Complex c1,struct Complex c2){
	struct Complex result;
	result.real = c1.real*c2.real - c1.imaginary*c2.imaginary;
	result.imaginary = c1.real*c2.imaginary + c2.real*c1.imaginary;
	return result;
}
// tinh thuong 2 so phuc
struct Complex divideComplex(struct Complex c1,struct  Complex c2){
	struct Complex result;
	result.real = (c1.real*c2.real + c1.imaginary*c2.imaginary) / (c2.real*c2.real + c2.imaginary*c2.imaginary);
	result.imaginary = (c1.imaginary*c2.real - c1.real*c2.imaginary) / (c2.real*c2.real + c2.imaginary*c2.imaginary);
	return result;	
	
}


int main(int argc, char *argv[]){
	struct Complex c1, c2, result;
	// nhap 2 so phuc
	printf("Please enter complex number first: \n");
	printf("Real1 = ");
	scanf("%lf", &c1.real);
	printf("Imaginary1 = ");
	scanf("%lf", &c1.imaginary);
	printf("Please enter complex number second: \n");
	printf("Real2 = ");
	scanf("%lf", &c2.real);
	printf("Imaginary2 = ");
	scanf("%lf", &c2.imaginary);
	//tong 2 so phuc
	result = addComplex(c1, c2);
	printf("Sum of 2 complex number is %.2lf + %.2lfi\n", result.real, result.imaginary);
	// hieu 2 so phuc
	result = subtractComplex(c1, c2);
	printf("The difference of two complex numbers is %.2lf + %.2lfi\n", result.real, result.imaginary);
	//tich 2 so phuc
	result = multiplyComplex(c1,c2);
	printf("The product of two complex numbers is %.2lf + %.2lfi\n", result.real, result.imaginary);
	//thuong 2 so phuc
	result = divideComplex(c1, c2);
	printf("The quotient of two complex numbers is %.2lf + (%.2lf)i\n", result.real, result.imaginary);
	
	// tinh F = c1 + c2*c3 - (c4+c5)
	
	struct Complex  c3, c4, c5, F, a,b,c;
	printf("Please enter complex number third: \n");
	printf("Real3 = ");
	scanf("%lf", &c3.real);
	printf("Imaginary3 = ");
	scanf("%lf", &c3.imaginary);
	printf("Please enter complex number fourth: \n");
	printf("Real4 = ");
	scanf("%lf", &c4.real);
	printf("Imaginary4 = ");
	scanf("%lf", &c4.imaginary);
	printf("Please enter complex number fifth: \n");
	printf("Real5 = ");
	scanf("%lf", &c5.real);
	printf("Imaginary5 = ");
	scanf("%lf", &c5.imaginary);
	printf("c1 = %.2lf + %.2lfi\n", c1.real, c1.imaginary);
	printf("c2 = %.2lf + %.2lfi\n", c2.real, c2.imaginary);
	printf("c3 = %.2lf + %.2lfi\n", c3.real, c3.imaginary);
	printf("c4 = %.2lf + %.2lfi\n", c4.real, c4.imaginary);
	printf("c5 = %.2lf + %.2lfi\n", c5.real, c5.imaginary);

	a = addComplex(c4, c5);
//	printf("%.2lf + %.2lfi\n", a.real, a.imaginary );
	b = multiplyComplex( c2, c3);
	c = addComplex(c1, b);
	F = subtractComplex(c, a);

	printf("F = %.2lf + %.2lfi",F.real, F.imaginary );
	return 0;
}
