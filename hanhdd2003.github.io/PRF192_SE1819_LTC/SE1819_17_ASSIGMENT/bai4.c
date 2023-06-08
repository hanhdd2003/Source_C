#include <stdio.h>
#include <ctype.h>  // Thu vi?n ch?a hàm isalpha() và tolower()

int main() {
    char s[100];
    int i,count = 0;
    printf("Enter a string: ");
    fgets(s, 100, stdin);  // Nhap chuoi s tu bàn phím
    
    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || (isspace(s[i-1]) && isalpha(s[i]))) {
            // Neu dây là chu cái dau tiên hoac chu cái dung sau khoang trang và là nguyên âm
           char c = tolower(s[i]); // Chuyen chu cái sang chu thuong de so sánh
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                count++;
            }
        }
    }
    printf("Number of words starting with a vowel: %d\n", count);
    return 0;
}

