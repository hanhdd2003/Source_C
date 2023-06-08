#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n;
	char message[100];  //= "Ho chi minh";
	gets(message);
	
	displayMessageInUpperCase(message, 1);
//	printf("Input a value(1: continue | 0: exit): ",1);
//	char ans = 'a';
//	scanf("%s", &ans);
//	if(ans == '0')
//		exit(0);
//	printf("Another statement...");
	displayMessageInlowerCase(message, 1);
	displayMessageInCapitalizeEachWord(message, 1);
	return 0;
}
