#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. number comparison / simple math operation
2. calculating product / sum / division / minus
3. sorting problem
4. print shapes (e.g. triangle, square...) using special characters (e.g. "*")
5. Array problems
6. string problems
7. more advanced array problems
8. numbering problems
9. workshop (without modified) problem
10. workshop (without modified) problem

*/ 




//De gom co 10 cau
//Thoi gian lam va nop bai tong la 85p
//Thi tren phan mem PEA client (khong phai la EOS client)
//Nop bai lam theo tung cau

//vi du ve sort mang so nguyen theo thu tu giam dan
/*
void bubbleSortDescending(int arr[], int n) {
int i, j, temp;
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (arr[j] < arr[j+1]) {
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}
void bubbleSortAscending(int arr[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
	for (j = 0; j < n - i - 1; j++) {
	if (arr[j] > arr[j+1]) {
	temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
	}
	}
	}
}
	int main() {
	int arr[] = {5, 2, 9, 1, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;
	printf("Original array: ");
	for (i = 0; i < n; i++) {
	printf("%d ", arr[i]);
	}
//bubbleSortDescending(arr, n);
	bubbleSortAscending(arr, n);
	printf("\nArray sorted in ascending order: ");
	for (i = 0; i < n; i++) {
	printf("%d ", arr[i]);
	}
	return 0;
}
//End of sort element in an array of number */
/* An example of swap value of two string variables s1 and s2
#define MAX_LENGTH 100
int main() {
char s1[MAX_LENGTH] = "Tran Hoang Linh";
char s2[MAX_LENGTH] = "Ngo Hoang An";
printf("Value of s1 before swap: %s\n", s1);
printf("Value of s2 before swap: %s\n", s2);
char temp[MAX_LENGTH];
strcpy(temp, s1);
strcpy(s1, s2);
strcpy(s2, temp);
printf("Value of s1 after swap: %s\n", s1);
printf("Value of s2 after swap: %s\n", s2);
return 0;
}
*/
//vi du ve mang hai chieu (2D: two dimension), tong quat la nhieu chieu
int main() {
int mang1D[] = {5, 1, 7, 2, 8, 10, 15};
printf("Kich thuoc cua mang1D: %d\n", sizeof(mang1D)/sizeof(mang1D[0]));
int mang2D[2][7] = {{5, 1, 7, 2, 8, 10, 15}, {7, 2, 6,3, 9, 9, 16}};
int kichThuocChieuThuNhat = sizeof(mang2D)/sizeof(mang2D[0]);
printf("Value of kichThuocChieuThuNhat = %d\n", kichThuocChieuThuNhat);
int kichThuocChieuThuHai = sizeof(mang2D[0])/sizeof(mang2D[0][0]);
printf("Value of kichThuocChieuThuHai = %d\n", kichThuocChieuThuHai);
return 0;
}
//give me an example of sort elements
//in an array of string in ascending order in C
