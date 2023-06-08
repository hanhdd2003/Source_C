#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
//BTVN quan ly sinh vien
/*
   Write a C-program that helps user managing a list of 100  student names 
   using the following menu:
 1- Add a student
 2- Remove a student
 3- Search a student
 4- Print the list in ascending order
 5- Quit
*/
typedef struct {
    char name[50];
    int age;
} Student;
int main(int argc, char *argv[]) {
 	int choice; //bien luu lai gia tri nguoi dung chon menu
 	Student listStudents[MAX_STUDENTS];
 	int numOfStudent = 0; //bien luu so luong sinh vien hien tai
 	while(1) {
 	printf("--== Student Management System ==--\n");
 	printf("\nMenu:\n");
        printf("1- Add a student\n");
        printf("2- Remove a student\n");
        printf("3- Search a student\n");
        printf("4- Print the list in ascending order\n");
        printf("5- Quit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", & choice);
        if (choice == 5) {
 	printf("Bye.\n");
 	exit(0); //thoat khoi chuong trinh
 	}
 	else if (choice >=1 && choice <=5) {
 	printf("You've choose %d option.\n", choice);
 	if (choice == 1) {
 	printf("Enter your name: ");
 	scanf("%s", listStudents[numOfStudent].name);
 	printf("Enter your age: ");
 	scanf("%d", &listStudents[numOfStudent].age);
 	numOfStudent++;
 	}
 	if (choice == 3) {
 	int i=0;
 	for(i=0; i<numOfStudent; i++) {
 	printf("Student %d has name %s, age %d\n", i, listStudents[i].name, listStudents[i].age);
 	}
 	printf("End of student list.\n");
 	}
 	}else {
 	printf("Error: you enter an invalid option. Please try again.\n");
 	}
 	}
 	return 0;
}
