#include <stdio.h>

int main(int argc, char *argv[]) {
    // Kiem tra so luong tham so
    if (argc != 2) {
        printf("Usage: SUM <file_name>\n");
        return 1;
    }

    // Lay tên file tu tham so thu hai
    char *file_name = argv[1];

    // Mo file de doc
    FILE *file = fopen(file_name, "r");
    if (file == NULL) {
        printf("Cannot open file %s\n", file_name);
        return 1;
    }

    // Tinh tong cac so trong file
    int sum = 0;
    int num;
    while (fscanf(file, "%d", &num) == 1) {
        printf("%d\n", num);
        sum += num;
    }

    // Ðong file
    fclose(file);

    // In ket qua
   printf("Sum: %d\n", sum);

    return 0;
}

