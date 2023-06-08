#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define USERNAME "ADMIN"
#define PASSWORD "p@ssw0rd"
void displayMessage(char s[]);
char* inputString(char msg[], int visible);
	
int main(){
	displayMessage("CHECK LOGIN SYSTEM");
	char* username=inputString("Input username: ", 1);
	char* password=inputString("Input password: ", 0);
	printf("You've enter username:%s and password:%s\n", username, password);
	if (strcmp(username, USERNAME)==0 && strcmp(password, PASSWORD)==0){
		printf("Dang nhap thanh cong !");
	}else{
		printf("Username/ password sai hoac Tai khoan khong ton tai.");
	}
	free(username);
	free(password);
	

	return 0;
}
