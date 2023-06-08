#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 100
#define MAX_LENGTH_Product_Name 100
#define MAX_LENGTH_MADE_IN 100
#define MAX_Product 100

struct Product{
	int productID;
	char productName[MAX_LENGTH_Product_Name];
	double price;
	char madein[MAX_LENGTH_MADE_IN];	
};


int main() {
 	 
	/* printf("Enter file path to read data: ");
 	scanf("%s", filePath);
 	printf("You've entered: %s\n", filePath);
    FILE *input_file = fopen(filePath, "r");
    if (input_file == NULL) {
        printf("Failed to open input file\n");
        return 1;
    }
    int num1, num2, num3;
    fscanf(input_file, "%d %d %d", &num1, &num2, &num3);
    fclose(input_file);
    int sum = num1 + num2 + num3;
    printf("Enter file path to write data: ");
 	scanf("%s", filePath);
 	printf("You've entered: %s\n", filePath);
    FILE *output_file = fopen(filePath, "w");
    if (output_file == NULL) {
        printf("Failed to open output file\n");
        return 1;
    }
 	char data[MAX_LENGTH];
 	while(1) {
 	fflush(stdin);
 	printf("Enter data to write to file (end with @.@): ");
 	fgets(data, 100, stdin);
 	if (strcmp(data, "@.@\n") == 0)
    	break;
 	else 
    	fprintf(output_file, "%s", data);
 	}
    fclose(output_file);
    printf("End of write data to file.\n");
    */
    
    
//----------------------doc tung dong trong file o.txt va hien thi ra man hinh--------------------------------
    char filePath[MAX_LENGTH];
	strcpy(filePath, "o2.txt");
    FILE *fp = fopen(filePath, "r");
    
    if(fp == NULL){
    	printf("Error: Can not open file %s to read.\n", filePath);
    	return 1; //ma loi la bang 1
	}
	printf("--==Begin read data of o2.txt==-- \n");
	int lineNumber = 1;
	char line[MAX_LENGTH];
	while((fscanf(fp, " %[^\n]", line)) != EOF){
		printf("Line %d: %s\n", lineNumber, line);
		lineNumber++;
		//clear input buffer
		//getchar();		
	}
	//reach end of file - eof => can phai dong file da mo lai de giai phong tai nguyen
	fclose(fp);
	printf("Read End Of File (EOF).\n");
    
    
    
//-------------------------Doc tung dong, tach cac phan tu dua vao mang cac sp de quan ly(them, sua, xoa, tim kiem)---------------------------------------    
    
    
    
    
    
    
    
    
    
	return 0;
}
