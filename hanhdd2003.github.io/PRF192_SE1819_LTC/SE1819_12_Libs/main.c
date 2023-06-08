#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//chuong trinh nhap vao 1 thi chay tiep
	//nhap 0 thi dung
	
	printf("Input a value (1: continue | 0: exit): ");
	char ans = 'a';
	scanf("%c", &ans);
	if (ans == '0')
		exit (0);
		
	printf("Another statements...");
	
	return 0;
}
