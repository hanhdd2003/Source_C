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
    // X�a k� tu newline o cuoi chuoi
    if (str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
        len--;
    }
    // Kiem tra xem chuoi c� phai palindrome hay kh�ng
    i = 0;
    j = len - 1;
    while (i < j)
    {
        // Neu k� tu kh�ng phai l� chu c�i hoac so th� bo qua
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
        // So s�nh k� tu o vi tr� i v� j
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

