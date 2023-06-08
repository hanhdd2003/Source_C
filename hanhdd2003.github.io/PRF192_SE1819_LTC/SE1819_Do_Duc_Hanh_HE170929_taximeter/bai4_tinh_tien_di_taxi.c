// SE1819 Do Duc Hanh HE170929

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* gia su bang gia cuoc don gian nhu sau:
		gia mo cua di 800m dau tien la 10k
		gia tu km tiep theo tu 801 den 49.8km la 7k/km
		gia tu km 49.8km tro di la 6k/ km
	*/
	char choice = 'y'; //bien luu gia tri ma nguoi dung lua chon co muon tiep tuc thuc hien nua khong (y/n)
	while(1){
		
		printf("Taxi meter version 1.0\n");
		int x = 0; // bien luu so m ma nguoi dung nhap
		printf("Please enter the total distance: ");
		scanf("%d", &x);
		long long pay = 0; //bien luu so tien ma hanh khach phai tra
		if (x>0 && x<= 800)
			pay = 10;
		else if (x>800 && x<=49800){
			int phan_nguyen = (x-800)/1000;
			int phan_du = (x-800)%1000;
			if (phan_du != 0){
			phan_nguyen++;
		}
			pay = 10 + 7*phan_nguyen;
		}else {//x>49800
			int n = (x-49800)/1000;
			int m = (x-49800)%1000;
			if( m!= 0){
				n++;
			}
			pay = 353 + 6*n; // 10 + 7*49 + 6*n
		}
		printf("you have to pay: %lld K\n", pay);
		
	printf("Do you want to run another transaction (y/n): ");
	scanf(" %c", &choice);
	if(choice =='n')
		break;	
	}
		
	system ("pause");
	return 0;
}

