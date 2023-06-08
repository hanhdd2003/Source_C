#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void displayMessage(char *str, int newline){	
	if(newline == 1)
		printf("%s\n",str);
	else if (newline == 0)
		printf("%s ", str);
	printf("--------------\n");	
}

char* displayMessageInUpperCase(char *str, int newline){
//	printf("%s\n", str);
	int i=0;
	while(str[i]){
		str[i] = toupper(str[i]);
		i++;
	}
	displayMessage(str, newline);
	return str;
	
}
char* displayMessageInlowerCase(char *str, int newline){
//	printf("%s\n", str);
	int i=0;
	while(str[i]){
		str[i] = tolower(str[i]);
		i++;
	}
	displayMessage(str, newline);
	return str;
	
	
}
char* displayMessageInCapitalizeEachWord(char *str, int newline){
//	int i=0;
	char *token = strtok(str, " ");
    while (token != NULL) {
        // Viet hoa chu c�i dau ti�n cua tu
        token[0] = toupper(token[0]);

        // In tu l�n m�n h�nh
        printf("%s ", token);

        // Tiep tuc t�ch chuoi
        token = strtok(NULL, " ");
    }
	
}
