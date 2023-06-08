#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char choice = 'y';
	while(1){
	    system("cls");
		int n, doi_xung = 0, m, so_ban_dau;
	    printf("Nhap vao n: ");
	    scanf("%d", &n);
	
	    so_ban_dau = n;
	
	    while (n != 0) {
	        m = n % 10;
	        doi_xung = doi_xung*10 + m;
	        n = n/10;
	    }
	
	    if (so_ban_dau == doi_xung)
	        printf("%d la so doi xung", so_ban_dau);
	    else
	        printf("%d khong phai la so doi xung", so_ban_dau);
	printf("\nNhap ki tu bat ki de tiep tuc, nhap 'n' de ket thuc (y/n): ");
	scanf(" %c", &choice);
	if(choice == 'n')
	break;
	}
	system("pause");
	return 0;
}
