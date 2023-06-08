#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Value of argc: %d\n", argc);
	printf("Value of first element in argv[] array: %s\n", argv[0]);
//	printf("Value of first element in argv[] array: %s\n", argv[1]);
	int i=0;
	for(i=1; i<argc; i++){
		printf("Value of element[%d]: %s\n", i, argv[i]);
	}
	
	
	return 0;
}
