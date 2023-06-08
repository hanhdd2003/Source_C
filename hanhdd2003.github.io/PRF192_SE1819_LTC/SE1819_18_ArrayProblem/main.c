#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define nMax 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* nhap vao mot mang n chu cai ngau nhien bat ki. roi xu ly sap xep theo cac quy luat neu duoi day
1. sap xep cac chu cai theo thu tu giam dan ve vi tri trong bang ascii
2. sap xep cac chu cai nguyen am giam dan truoc roi moi den phu am giam dan sau
vi du 7
k a b p u o e
1. u p o k e b a
2. u o e a p k b
*/
int isVowel(char c){ //kiem tra ki tu truyen vao co phai nguyen am, dung:1; Sai:0;
	if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
		return 1;
	}else{
		return 0;
	}	
	return 1;
}

int main(int argc, char *argv[]) {
	int i, n;
	char arr[nMax];
	scanf("%d", &n);
	for( i=0 ; i<n ; i++){
		scanf(" %c", &arr[i]);
	}
//	printf("After input %d elements, we have: \n", n);
//	for( i=0 ; i<n ; i++){
//		printf("%c ", arr[i]);
//	}
	printf("OutPut \n");
	// sort in descending order
	int j=0;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(arr[i] < arr[j]){
				//swap element i and J
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
//	printf("After sort in descending order, we have: \n");
	for( i=0 ; i<n ; i++){
		printf("%c ", arr[i]);
	}
	

	char arr2[nMax];
	//bo sung cac ki tu nguyen am vao mang arr2 tu mang arr da sap xep theo thu tu giam dan 
	j=0; // chi so cua arr2
	for(i=0; i<n ; i++){
		if(isVowel(arr[i]) == 1){
			arr2[j] = arr[i];
			j++;
		}
	}
	//tiep tuc lam tuong tu nhu tren, nhung bo sung phu am tu arr sang arr2
	for(i=0; i<n ; i++){
		if(isVowel(arr[i]) == 0){
			arr2[j] = arr[i];
			j++;
		}
	}
	printf("\n");
	for( i=0 ; i<n ; i++){
		printf("%c ", arr2[i]);
	}
	printf("\n------------------------------");
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				//swap element i and J
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n");
	for( i=0 ; i<n ; i++){
		printf("%c ", arr[i]);
	}
	j=0; // chi so cua arr2
	for(i=0; i<n ; i++){
		if(isVowel(arr[i]) == 1){
			arr2[j] = arr[i];
			j++;
		}
	}
	//tiep tuc lam tuong tu nhu tren, nhung bo sung phu am tu arr sang arr2
	for(i=0; i<n ; i++){
		if(isVowel(arr[i]) == 0){
			arr2[j] = arr[i];
			j++;
		}
	}
	printf("\n");
	for( i=0 ; i<n ; i++){
		printf("%c ", arr2[i]);
	}
	return 0;
}
