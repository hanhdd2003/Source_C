#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x; //bien luu gia tri nguoi dung nhap tu ban phim
	long long sum = 0; //bien luu tong so chan
	printf("Chuong trinh tinh tong cac so chan nhap vao tu ban phim. \n");
	printf("	(Chuong trinh se dung khi nhap vao gia tri -999)\n");
	printf("\nNhap vao cac so: \n");
	while (1){
	// voi dieu kien 1 nghia là dieu kien vong lap luon dung
	//thi nho trong vong lap phai co xuat hien lenh break
	printf("\nNhap x: ");
	scanf("%d", &x);
	if(x%2==0){
	sum = sum + x;
	}
	if(x==-999)
	break;
	}
	printf("Tong cac so chan sum = %lld\n", sum);
	
	
	system("pause");
	return 0;
}
