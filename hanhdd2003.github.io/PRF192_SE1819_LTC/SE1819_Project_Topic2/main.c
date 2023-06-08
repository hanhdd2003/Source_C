#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_LENGTH 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//nhap sach
typedef struct {
    char name[MAX_LENGTH];
    char author[MAX_LENGTH];
    int quantity;
} book;

int main(int argc, char *argv[]) {
	book List_Book[MAX_LENGTH]; //khai bao mang luu cac loai sach
	char a = 'y';
	int num_book = 0;    //dem so sach da nhap
	
	//nhap sach
	while(1){
		
		printf("Enter name of book: ");    // nhap ten sach
    	fgets(List_Book[num_book].name, sizeof(List_Book[num_book].name), stdin);
		List_Book[num_book].name[strcspn(List_Book[num_book].name, "\n")] = '\0';
    	
		printf("Enter name of author: ");    //nhap ten tac gia
		fgets(List_Book[num_book].author, sizeof(List_Book[num_book].author), stdin);
		List_Book[num_book].author[strcspn(List_Book[num_book].author, "\n")] = '\0';
		
		printf("Enter quantity: ");          // nhap so luong sach
		scanf("%d", &List_Book[num_book].quantity);
		num_book++;
		printf("Do you want add more book ? Y to continue || N to end: ");
		scanf(" %c", &a);
		if(a == 'n' || a == 'N'){
			break;
		} 
		while(getchar() != '\n'); // clear input buffer
		}
		  
		// in sach da nhap  
		printf("LIST OF BOOK: \n");
		int i=0;
	 	for(i=0; i<num_book; i++) {
	 	printf("book: %d\n", i+1);
	 	printf("Name Of Book: %s\n", List_Book[i].name);
	 	printf("Name Of Author: %s\n", List_Book[i].author);
	 	printf("Quantity: %d\n", List_Book[i].quantity);
 	}
 	
 	
	return 0;
}
