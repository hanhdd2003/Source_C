#include <stdio.h>
	
	int n=5;
	
int genRandomInt(int min, int max){
	//remember to run this statement srand(time(NULL)):
	return (min + rand() % (max - min +1));
}
	
void swap(int a, int b){
	printf("Value before swap a = %d,b = %d\n", a, b);
	int temp = a;
	a=b;
	b=temp;
	printf("Value after swap a = %d,b = %d\n", a, b);
}

void swapByRef(int *a, int *b){
//	printf("Value before swap %d, %d\n", *a, *b);
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("Value after swapByRef a = %d, b =  %d\n", *a, *b);
}

void sort(int arr[n]){
	int i, j;
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	printf("In sort() funtion, we have: \n");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	
}

void printArr(int arr[n]){
	int i=0;
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	
}

int main(void) {
//  int a = 10;
//  int *ptr1 = &a;
//  int **ptr2 = &ptr1;
//
//  printf("Value of a: %d\n", a);
//  printf("Address of a: %p\n", &a); 		// %p + &a la de lay dia chi cua bien
//  printf("Value of ptr1: %p\n", ptr1);
//  printf("Address of ptr1: %p\n", &ptr1);  // %p + &ptr1 la de lay dia chi cua con tro
//  printf("Value of *ptr1: %d\n", *ptr1);  //dau * de lay gia tri cua dia chi ma con tro chi toi
//  printf("Value of ptr2: %p\n", ptr2);
//  printf("Address of ptr2: %p\n", &ptr2);
//  printf("Value of *ptr2: %p\n", *ptr2);
//  printf("Value of **ptr2: %d\n", **ptr2);
	
	
//	int a=5, b=10;
//	swap(a,b);
//	printf("After run swap() funtion, we have a = %d, b = %d\n", a, b);
//	swapByRef(&a, &b);
//	printf("After run swapByRef() funtion, we have a = %d, b = %d\n", a, b);

	int n =5;
	int  mangSoNguyen[n];
//	mangSoNguyen [0] = 7;
//	mangSoNguyen [1] = 5;
//	mangSoNguyen [2] = 9;
//	mangSoNguyen [3] = 21;
//	mangSoNguyen [4] = 17;

	srand(time(NULL));
	int k=0;
	for (k=0; k<n; k++)
		mangSoNguyen[k] = genRandomInt(1, 10);

	//sap xep mang tren theo thu tu tang dan ve gia tri: 5 7 9 17 21
	printf("Before sort in ascending order, we have: \n");
	printArr(mangSoNguyen);

	sort(mangSoNguyen);
	
	printf("After run sort() funtion, we have: \n");
//	for(i=0; i<n; i++)
//		printf("%d ", mangSoNguyen[i]);
//	printf("\n");
	printArr(mangSoNguyen);
	
  return 0;
}
