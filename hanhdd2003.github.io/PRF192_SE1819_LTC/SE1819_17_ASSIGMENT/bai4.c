#include <stdio.h>
#include <ctype.h>  // Thu vi?n ch?a h�m isalpha() v� tolower()

int main() {
    char s[100];
    int i,count = 0;
    printf("Enter a string: ");
    fgets(s, 100, stdin);  // Nhap chuoi s tu b�n ph�m
    
    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || (isspace(s[i-1]) && isalpha(s[i]))) {
            // Neu d�y l� chu c�i dau ti�n hoac chu c�i dung sau khoang trang v� l� nguy�n �m
           char c = tolower(s[i]); // Chuyen chu c�i sang chu thuong de so s�nh
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
    }
    printf("Number of words starting with a vowel: %d\n", count);
    return 0;
}

