#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void displayMessage(char s[]){
	printf("%s\n",s);
}
char* inputString(char msg[], int visible){
	char* str=(char*)malloc(100*sizeof(char));
	if(str==NULL){
		printf("Error:Unable to allocate memory");
		exit(1);
	}
	printf("%s",msg);
	char c;
	int i=0;
	if(visible==1){
		while((c=getche())!='\r'){
			str[i]=c;
			i++;
		}
	}
	else if (visible==0){
		while((c=getch())!='\r'){
			str[i]=c;
			i++;
			printf("*");
		}
		
	}
	str[i]='\0';
	printf("\n");
	return str;
}
