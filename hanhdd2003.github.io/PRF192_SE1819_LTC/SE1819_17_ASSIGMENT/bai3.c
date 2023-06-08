#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, is_palindrome = 1;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    len = strlen(str);
    // Xóa ký tu newline o cuoi chuoi
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    // Kiem tra xem chuoi có phai palindrome hay không
    i = 0;
    j = len - 1;
    while (i < j)
    {
        // Neu ký tu không phai là chu cái hoac so thì bo qua
        if (!isalnum(str[i]))
        {
            i++;
            continue;
        }
        if (!isalnum(str[j]))
        {
            j--;
            continue;
        }
        // So sánh ký tu o vi trí i và j
        if (tolower(str[i]) != tolower(str[j]))
        {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }
    // In ket qua
    if (is_palindrome)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }
    return 0;
}

