#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_BOOKS 100
#define MAX_BORROWERS 100

int i, j, count=0;

// -----------------------------tao ra cac struct book, borrower, library--------------------------------
struct book{
    char title[100];
    char author[100];
    int quantity;
};

struct borrower{
    int id;
    char name[100];
    char book[100][100]; // mang 2 chieu de luu ten cuon sach
    char author[100];
    int num_books;
    char borrow_date[20];
    char due_date[20];
    int loan_term;
};

//struct borrower br[100];

struct library{
    struct book books[MAX_BOOKS];
    int num_books;
    struct borrower borrowers[MAX_BORROWERS];
    int num_borrowers;
    int count;      // them bien dem so sach
};
void add_book_from_file(struct library *lib)       // nhap sach tu file 
{
    if (lib->num_books == MAX_BOOKS)
    {
        printf("The library is full, cannot add more books.\n");
        return;
    }

    FILE *file;
    file = fopen("input.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file.\n");
        return;
    }

    char buffer[100];

    while (fgets(buffer, 100, file))
    {
        buffer[strcspn(buffer, "\n")] = 0;
        strcpy(lib->books[lib->num_books].title, strtok(buffer, ","));
        strcpy(lib->books[lib->num_books].author, strtok(NULL, ","));
        lib->books[lib->num_books].quantity = atoi(strtok(NULL, ","));
        
        // Check if the book already exists in the library
        int book_index = -1;
        for (i = 0; i < lib->num_books; i++)
        {
            if (strcmp(lib->books[i].title, lib->books[lib->num_books].title) == 0
                && strcmp(lib->books[i].author, lib->books[lib->num_books].author) == 0)
            {
                book_index = i;
                break;
            }
        }

        if (book_index == -1)
        {
            lib->num_books++;
            printf("Book added successfully.\n");
            count++;
        }
        else
        {
            lib->books[book_index].quantity += lib->books[lib->num_books].quantity;
            printf("Book quantity updated successfully.\n");
        }
    }

    fclose(file);
}
void display_books(struct library *lib)
{

    printf(" %-30s %-25s %-10s\n", "Title", "Author", "Quantity");
    for ( i = 0; i < lib->num_books; i++) {
        printf("%-30s %-30s %-10d\n",  lib->books[i].title, lib->books[i].author, lib->books[i].quantity);
    }
    
}


//---------------------------------------------------------------------------------------------------

void search_book(struct library *lib, char keyword[]) {
    printf("%-30s %-20s %-10s\n", "Title", "Author", "Quantity");
    for ( i = 0; i < lib.num_books; i++) {
        if (strstr(lib.books[i].title, keyword) || strstr(lib.books[i].author, keyword)) {
            printf("%-30s %-20s %-10d\n",  lib.books[i].title, lib.books[i].author, lib.books[i].quantity);
        }
    }
}

int main (int argc, char *argv[]){
	char keyword[100];	
	struct library lib;
    lib.num_books = 0;
    lib.num_borrowers = 0;
    int choice, a;
    do
    {

        printf("\n===Menu===\n");
        printf("1. Add a book\n");
        printf("2. Display all books in library\n");
        printf("3. Search book and manage book\n");
        printf("4. Lend book\n");
        printf("5. Return book\n");
        printf("6. Display all borrowers\n");
		printf("7. Sort books\n");
		printf("8.Help\n");
        printf("9. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
			add_book_from_file(&lib);
			break;			
        case 2:
            printf("Have %d book in library\n", count);
			display_books(&lib);
            break;
        case 3:						
			printf("Enter keyword: ");
			scanf("%s", keyword);
			search_book(&lib, keyword);
            break;
			break;
        case 9:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    }while (choice != 9);
	return 0;
}

