#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score;
	printf("Enter your score: ");
	scanf("%d", &score);
	
	if ( score >= 80 && score < 90){
		printf("You've got rank B\n"); //test case tai bien, nen can 2 test case cho truong hop nay
	}
	else if( score >= 70 && score < 80){
		printf("You've got rank C\n"); //test case tai bien, nen can 2 test case cho truong hop nay
	}
	else if ( score >= 60 && score <70){
		printf("You've got rank D\n");  //test case tai bien, nen can 2 test case cho truong hop nay
	}
	else if ( score < 60 ){
		printf("You've got rank E\n");  //can 1 test case cho truong hop nay
	}else{
		printf("You've got rank A\n");  //can 1 test case cho truong hop nay
	}
	
	return 0;
}
