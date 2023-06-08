#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	
	//1
	printf("Nhap vao 3 so thuc: ");
	scanf("%f %f %f", &a, &b, &c);
	
	
	//2
	if( a<=0 || b<=0 || c<=0 ){
	printf("Khong hop le\n");
	return 0;
	}else{ //3
		if(a+b>c && a+c>b && b+c>a ){
			printf("THOA MAN 3 CANH TAM GIAC\n");
			if(a>b && b>c){
				printf("%.2f, %.2f, %.2f\n", c,b,a);
			}else if(a>c && c>b){
				printf("%.2f, %.2f, %.2f\n", b,c,a);
			}else if (b>a && a>c){
				printf("%.2f, %.2f, %.2f\n", c,a,b);
			}else if (b>c && c>a){
				printf("%.2f, %.2f, %.2f\n", a,c,b);
			}else if (c>b && b>a){
				printf("%.2f, %.2f, %.2f\n", a,b,c);
			}else if(c>a && a>b){
				printf("%.2f, %.2f, %.2f\n", b,a,c);
			}		
		}else{
			printf("KHONG THOA MAN\n");
			printf("%.2f, %.2f, %.2f\n", a,b,c);
			return 0;
		}
		
	}
	
	return 0;
}


/*
printf("Nhap vao 3 so thuc: ");
if (scanf("%f %f %f", &a, &b, &c) != 3) {
    printf("Khong phai la 3 so thuc\n");
    return 0;
}

if (a <= 0 || b <= 0 || c <= 0) {
    printf("Khong hop le\n");
    return 0;
}

if (a + b > c && a + c > b && b + c > a) {
    printf("THOA MAN 3 CANH TAM GIAC\n");
    if (a >= b && a >= c) {
        if (b >= c) {
            printf("%.2f, %.2f, %.2f\n", c, b, a);
        } else {
            printf("%.2f, %.2f, %.2f\n", b, c, a);
        }
    } else if (b >= a && b >= c) {
        if (a >= c) {
            printf("%.2f, %.2f, %.2f\n", c, a, b);
        } else {
            printf("%.2f, %.2f, %.2f\n", a, c, b);
        }
    } else {
        if (a >= b) {
            printf("%.2f, %.2f, %.2f\n", b, a, c);
        } else {
            printf("%.2f, %.2f, %.2f\n", a, b, c);
        }
    }

    sum_of_digits = (int)(a + 0.5) + (int)(b + 0.5) + (int)(c + 0.5);
    if (sum_of_digits % 10 == 0) {
        printf("Tam giac may man\n");
    }
} else {
    printf("KHONG THOA MAN 3 CANH CUA TAM GIAC\n");
}

return 0;
*/
