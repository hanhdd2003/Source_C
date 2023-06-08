#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_BOOKS 100
#define MAX_BORROWERS 100

int i, j;
//int num_borrower = -1;

struct book
{
    char title[100];
    char author[100];
    int quantity;
};

struct borrower
{
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

struct library
{
    struct book books[MAX_BOOKS];
    int num_books;
    struct borrower borrowers[MAX_BORROWERS];
    int num_borrowers;
};

void display_books(struct library *lib)
{
    for (i = 0; i < lib->num_books; i++)
    {
        for (j = i + 1; j < lib->num_books; j++)
        {
            if (strcmp(lib->books[i].title, lib->books[j].title) > 0)
            {
                struct book temp = lib->books[i];
                lib->books[i] = lib->books[j];
                lib->books[j] = temp;
            }
        }
    }
    
    for (i = 0; i < lib->num_books; i++)
    {
        printf("\nTitle: %s\n", lib->books[i].title);
        printf("Author: %s\n", lib->books[i].author);
        printf("Quantity: %d\n", lib->books[i].quantity);
    }
}

void add_book(struct library *lib)
{
    if (lib->num_books == MAX_BOOKS)
    {
        printf("The library is full, cannot add more books.\n");
        return;
    }
	printf("Enter the book title: ");
	fflush(stdin);
	fgets(lib->books[lib->num_books].title, 100, stdin);
	lib->books[lib->num_books].title[strcspn(lib->books[lib->num_books].title, "\n")] = 0;
	
	printf("Enter the author name: ");
	fflush(stdin);
	fgets(lib->books[lib->num_books].author, 100, stdin);
	lib->books[lib->num_books].author[strcspn(lib->books[lib->num_books].author, "\n")] = 0;
	
    printf("Enter the quantity: ");
    scanf("%d", &lib->books[lib->num_books].quantity);
    
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
    }
    else
    {
        lib->books[book_index].quantity += lib->books[lib->num_books].quantity;
        printf("Book quantity updated successfully.\n");
    }
}

void add_book_from_file(struct library *lib)
{
    if (lib->num_books == MAX_BOOKS)
    {
        printf("The library is full, cannot add more books.\n");
        return;
    }
	
	char filePath[100];
	printf("Enter file path to read data: ");
	scanf("%s", filePath);
	
    FILE *file;
    file = fopen(filePath, "r");
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
        }
        else
        {
            lib->books[book_index].quantity += lib->books[lib->num_books].quantity;
            printf("Book quantity updated successfully.\n");
        }
    }

    fclose(file);
}



void search_book(struct library *lib)
{
    char title[100], author[100];
    printf("Enter the book title: ");
    fflush(stdin);   
    fgets(title, 100, stdin);
    title[strcspn(title, "\n")] = '\0';
    
    printf("Enter the author name: ");
    fflush(stdin);   
    fgets(author, 100, stdin);
    author[strcspn(author, "\n")] = '\0';
    
    for (i = 0; i < lib->num_books; i++)
    {
        if (strcmp(lib->books[i].title, title) == 0 && strcmp(lib->books[i].author, author) == 0)
        {
	        printf("\nTitle: %s\n", lib->books[i].title);
	        printf("Author: %s\n", lib->books[i].author);
	        printf("Quantity: %d\n", lib->books[i].quantity);   
			         
            int choice;
            printf("\nDo you want to:\n");
            printf("1. Increase quantity\n");
            printf("2. Decrease quantity\n");
            printf("3. No, thanks\n");
            
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                printf("Enter the quantity to add: ");
                int quantity;
                scanf("%d", &quantity);
                lib->books[i].quantity += quantity;
                printf("Quantity updated successfully.\n");
                break;
            case 2:
                printf("Enter the quantity to remove: ");
                scanf("%d", &quantity);
                if (quantity > lib->books[i].quantity)
                {
                    printf("Cannot remove more books than available.\n");
                }
                else
                {
                    lib->books[i].quantity -= quantity;
                    printf("Quantity updated successfully.\n");
                }
                break;
			case 3:
                return;
            }
            return;
        }
    }
    printf("Book not found.\n");
}

void lend_book(struct library *lib)
{	
//	num_borrower++;
    int id, quantity;
    char title[100], name[100], author[100], borrow_date[20], due_date[20];

    printf("Enter borrower ID: ");
    fflush(stdin);    
    scanf("%d", &id);
//    br[num_borrower].id	= id;
    
    printf("Enter name of borrower: ");
    fflush(stdin);
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';
	    
    printf("Enter the book title: ");
    fflush(stdin);
    fgets(title, 100, stdin);
    title[strcspn(title, "\n")] = '\0';
    
//    strcpy(br[num_borrower].name, title);

    printf("Enter the author of book: ");
    fflush(stdin);
    fgets(author, 100, stdin);
    author[strcspn(author, "\n")] = '\0';
    
    printf("Enter the number of books to borrow: ");
    fflush(stdin);
    scanf("%d", &quantity);
    
//    br[num_borrower].num_books = quantity;
    
    printf("Enter the borrow date (dd-mm-yyyy): ");
    fflush(stdin);
    scanf("%s", borrow_date);
    
//    strcpy(br[num_borrower].borrow_date, borrow_date);
    
    printf("Enter the due date (dd-mm-yyyy): ");
    fflush(stdin);
    scanf("%s", due_date);
	
//	strcpy(br[num_borrower].due_date, due_date);
	
    printf("Enter the loan term (in days): ");
    int loan_term;
    fflush(stdin);
    scanf("%d", &loan_term);
    
    for (i = 0; i < lib->num_books; i++)
    {
        if (strcmp(lib->books[i].title, title) == 0 && strcmp(lib->books[i].author, author) == 0)
        {
            if (lib->books[i].quantity < quantity)
            {
                printf("Not enough books available to lend.\n");
                return;
            }
            lib->books[i].quantity -= quantity;
            strcpy(lib->borrowers[lib->num_borrowers].book[lib->borrowers[lib->num_borrowers].num_books], title);
            strcpy(lib->borrowers[lib->num_borrowers].author, author);
            strcpy(lib->borrowers[lib->num_borrowers].name, name);
			lib->borrowers[lib->num_borrowers].id = id;
            lib->borrowers[lib->num_borrowers].num_books = quantity;
            strcpy(lib->borrowers[lib->num_borrowers].borrow_date, borrow_date);
            strcpy(lib->borrowers[lib->num_borrowers].due_date, due_date);
            lib->borrowers[lib->num_borrowers].loan_term = loan_term;
            lib->num_borrowers++;
            printf("%d book(s) borrowed successfully by borrower %d.\n", quantity, id);
            return;
        }
    }
    printf("Book not found.\n");
}

void display_borrowers(struct library *lib)
{
	int id, quantity, num_books, loan_term;
	char title[100], name[100], author[100], book[100], borrow_date[20], due_date[20];
	
    printf("List of Borrowers:\n");
    for (i = 0; i < lib->num_borrowers; i++) {
        if (lib->borrowers[i].num_books == 0) {
            continue; // bo qua nguoi muon không còn sách nào trong danh sách muon
        }
        printf("Borrower ID: %d\n", lib->borrowers[i].id);
        printf("Name: %s\n", lib->borrowers[i].name);
        printf("Books Borrowed:\n");
        int book_count = 0;
        for (j = 0; j < lib->borrowers[i].num_books; j++)
        {
            printf("%d. %s by %s\n", ++book_count, lib->borrowers[i].book, lib->borrowers[i].author);
        }
        printf("\n");
        printf("Borrow Date: %s\n", lib->borrowers[i].borrow_date);
        printf("Due Date: %s\n", lib->borrowers[i].due_date);
        printf("Loan Term: %d days\n\n", lib->borrowers[i].loan_term);
    }
}

void print_borrowers(struct library *lib)
{
	int id, quantity, num_books, loan_term, num_borrowers;
	char title[100], name[100], author[100], book[100], borrow_date[20], due_date[20];
    printf("List of Borrowers:\n");
    for (i = 0; i < lib->num_borrowers; i++)
    {
        printf("%d. ", i + 1);
        for (j = 0; j < lib->borrowers[i].num_books; j++)
        {
            printf("%s by %s", lib->borrowers[i].book[j], lib->borrowers[i].author);
            if (j != lib->borrowers[i].num_books - 1)
            {
                printf(", ");
            }
        }
        printf(" by %s (ID: %d)\n", lib->borrowers[i].name, lib->borrowers[i].id);
    }
}


void return_book(struct library *lib, int borrower_id, char book_title[],int num_bookre)
{
    int flag ;
    for (i = 0; i < lib->num_borrowers; i++)
    {
        if (lib->borrowers[i].id == borrower_id)
        {
            for (j = 0; j < lib->borrowers[i].num_books; j++)
            {
                if (strcmp(lib->borrowers[i].book[j], book_title) == 0)
                {
                    flag = 1;
                    lib->borrowers[i].num_books-=num_bookre;
                    lib->books[j].quantity+=num_bookre;
                    strcpy(lib->borrowers[i].book[j], "");
                    printf("%d book '%s' returned successfully by borrower %d.\n",num_bookre, book_title, borrower_id);
                    break;
                }
            }
            if (flag == 0)
            {
                printf("Borrower %d did not borrow the book '%s'.\n", borrower_id, book_title);
                break;
            }
            if (lib->borrowers[i].num_books == 0)
            {
                for (j = i; j < lib->num_borrowers - 1; j++)
                {
                    lib->borrowers[j] = lib->borrowers[j + 1];
                }
                lib->num_borrowers--;
            }
            break;
        }
    }
    
}



void sort_books(struct library *lib)
{
    int choice;
    printf("Sort by:\n");
    printf("1. Title\n");
    printf("2. Author\n");
    printf("3. Quantity\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        for (i = 0; i < lib->num_books - 1; i++)
        {
            for ( j = i + 1; j < lib->num_books; j++)
            {
                if (strcmp(lib->books[i].title, lib->books[j].title) > 0)
                {
                    struct book temp = lib->books[i];
                    lib->books[i] = lib->books[j];
                    lib->books[j] = temp;
                }
            }
        }
        printf("Books sorted by title:\n");
        break;
    case 2:
        for (i = 0; i < lib->num_books - 1; i++)
        {
            for (j = i + 1; j < lib->num_books; j++)
            {
                if (strcmp(lib->books[i].author, lib->books[j].author) > 0)
                {
                    struct book temp = lib->books[i];
                    lib->books[i] = lib->books[j];
                    lib->books[j] = temp;
                }
            }
        }
        printf("Books sorted by author:\n");
        break;
    case 3:
        for (i = 0; i < lib->num_books - 1; i++)
        {
            for (j = i + 1; j < lib->num_books; j++)
            {
                if (lib->books[i].quantity > lib->books[j].quantity)
                {
                    struct book temp = lib->books[i];
                    lib->books[i] = lib->books[j];
                    lib->books[j] = temp;
                }
            }
        }
        printf("Books sorted by quantity:\n");
        break;
    default:
        printf("Invalid choice.\n");
        return;
    }
    for (i = 0; i < lib->num_books; i++)
    {
        printf("%s by %s, quantity: %d\n", lib->books[i].title, lib->books[i].author, lib->books[i].quantity);
    }
}


int main()
{
    struct library lib;
    lib.num_books = 0;
    lib.num_borrowers = 0;
    
    int choice;
    do
    {
		system("cls");
        printf("\n===Menu===\n");
        printf("1. Add a book\n");
        printf("2. Add book from file\n");
        printf("3. Display all books in library\n");
        printf("4. Search book and manage book\n");
        printf("5. Lend book\n");
        printf("6. Return book\n");
        printf("7. Display all borrowers\n");
		printf("8. Sort books\n");
        printf("9. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_book(&lib);
            break;
        case 2:
            add_book_from_file(&lib);
            break;                       
        case 3:
            display_books(&lib);
            break;
        case 4:
            search_book(&lib);
            break;
        case 5:
            lend_book(&lib);
            break;
        case 6:
        	{
			int idtra, so_sach;
			char name_tra[50];
			char book_tra[50];  
			printf("Enter borrower ID: ");
			fflush(stdin);
			scanf("%d",&idtra);
			

 			printf("Enter book title: ");
 			fflush(stdin);
			fgets(book_tra, 50, stdin);
			book_tra[strcspn(book_tra, "\n")] = '\0';
			
			printf("How many books do you want to return: ");
			fflush(stdin);
            scanf("%d",&so_sach);

			return_book(&lib, idtra, book_tra,so_sach);
                break;
            }
        case 7:
            display_borrowers(&lib);
            break;
 		case 8:
			sort_books(&lib);
 			break;    
        case 9:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
        printf("\n");
    	system("pause");
    } while (choice != 9);
    return 0;
}


