bai 1 Viet chuong trinh C de tim do dai cua mot chuoi 
bai 2 Viet chuong trinh C sao chep mot chuoi nay sang mot chuoi khac 
bai 3 Viet chuong trinh C de noi hai chuoi 
bai 4 Viet chuong trinh C de so sanh hai chuoi 
bai 5 Viet chuong trinh C chuyen doi chuoi chu thuong thanh chu hoa 
bai 6 Viet chuong trinh C chuyen doi chuoi chu hoa thanh chu thuong 
bai 7 Viet chuong trinh C chuyen doi hoa thuong cua tung ky tu trong mot chuoi 
bai 8 Viet chuong trinh C de tim tong so chu cai chu so hoac ky tu dac biet trong mot chuoi 
bai 9 Viet chuong trinh C de dem tong so nguyen am va phu am trong mot chuoi 
bai 10 Viet chuong trinh C de dem tong so tu trong mot chuoi 
bai 11 Viet chuong trinh C de tim nguoc lai cua mot chuoi 
bai 12 Viet chuong trinh C de kiem tra xem mot chuoi co phai la palindrome hay khong 
bai 13 Viet chuong trinh C de dao nguoc thu tu cac tu trong mot chuoi da cho 
bai 14 Viet chuong trinh C de tim lan xuat hien dau tien cua mot ky tu trong mot chuoi da cho 
bai 15 Viet chuong trinh C de tim lan xuat hien cuoi cung cua mot ky tu trong mot chuoi da cho 
bai 16 Viet chuong trinh C de tim kiem tat ca cac lan xuat hien cua mot ky tu trong chuoi da cho 
bai 17 Viet chuong trinh C dem so lan xuat hien cua mot ky tu trong chuoi da cho 
bai 18 Viet chuong trinh C de tim ky tu tan so cao nhat trong mot chuoi 
bai 19 Viet chuong trinh C de tim ky tu tan so thap nhat trong mot chuoi 
bai 20 Viet chuong trinh C de dem tan so xuat hien cua moi ky tu trong mot chuoi 
bai 21 Viet chuong trinh C de loai bo su xuat hien dau tien cua mot ky tu khoi chuoi 
bai 22 Viet chuong trinh C de xoa lan xuat hien cuoi cung cua mot ky tu khoi chuoi 
bai 23 Viet chuong trinh C de xoa tat ca cac lan xuat hien cua mot ky tu khoi chuoi 
bai 24 Viet chuong trinh C de xoa tat ca cac ky tu lap lai khoi mot chuoi da cho 
bai 25 Viet chuong trinh C de thay the lan xuat hien dau tien cua mot ky tu bang mot ky tu khac trong chuoi 
bai 26 Viet chuong trinh C de thay the lan xuat hien cuoi cung cua mot ky tu bang mot ky tu khac trong chuoi 
bai 27 Viet chuong trinh C de thay the tat ca cac lan xuat hien cua mot ky tu bang mot ky tu khac trong mot chuoi 
bai 28 Viet chuong trinh C de tim lan xuat hien dau tien cua mot tu trong mot chuoi da cho 
bai 29 Viet chuong trinh C de tim lan xuat hien cuoi cung cua mot tu trong mot chuoi da cho 
bai 30 Viet chuong trinh C de tim kiem tat ca cac lan xuat hien cua mot tu trong chuoi da cho 
bai 31 Viet chuong trinh C de dem so lan xuat hien cua mot tu trong mot chuoi cho truoc 
bai 32 Viet chuong trinh C de loai bo su xuat hien dau tien cua mot tu trong chuoi 
bai 33 Viet chuong trinh C de loai bo lan xuat hien cuoi cung cua mot tu trong chuoi da cho 
bai 34 Viet chuong trinh C de loai bo tat ca cac lan xuat hien cua mot tu trong chuoi da cho 
bai 35 Viet chuong trinh C de cat cac ky tu khoang trang o dau chuoi da cho 
bai 36 Viet chuong trinh C de cat cac ky tu khoang trang o cuoi chuoi da cho 
bai 37 Viet chuong trinh C de cat ca ky tu khoang trang o dau va cuoi tu chuoi da cho 
bai 38 Viet chuong trinh C de xoa tat ca cac khoang trang thua khoi chuoi da cho

............................................................................................................................................................................
bai 1
/**
 * C program to find length of a string using pointer
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text[MAX_SIZE]; /* Declares a string of size 100 */
    char * str = text; /* Declare pointer that points to text */
    int count = 0;

    /* Input string from user */
    printf("Enter any string: ");
    gets(text);

    /* Iterate though last element of the string */
    while(*(str++)) count++;

    printf("Length of '%s' = %d", text, count);

    return 0;
}
bai 2 
/**
 * C program to copy one string to another string without using strcpy()
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum size of the string

int main()
{
    char text1[MAX_SIZE];
    char text2[MAX_SIZE];
    int i;
    
    /* Input string from user */
    printf("Enter any string: ");
    gets(text1);
    
    /* Copy text1 to text2 character by character */
    for(i=0; text1[i]!='\0'; i++)
    {
        text2[i] = text1[i];
    }

    //Makes sure that the string is NULL terminated
    text2[i] = '\0';

    printf("First string = %s\n", text1);
    printf("Second string = %s\n", text2);
    printf("Total characters copied = %d\n", i);

    return 0;
}

bai 3 
/**
 * C program to concatenate two strings using pointer
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;

    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    /* Move till the end of str1 */
    while(*(++s1));

    /* Copy str2 to str1 */
    while(*(s1++) = *(s2++));

    printf("Concatenated string = %s", str1);

    return 0;
}
bai 4 
/**
 * C program to compare two string without using string library functions
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Compare function declaration */
int compare(char * str1, char * str2);


int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int res;

    /* Input two strings from user */
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);


    /* Call the compare function to compare strings */
    res = compare(str1, str2);

    if(res == 0)
    {
        printf("Both strings are equal.");
    }
    else if(res < 0)
    {
        printf("First string is lexicographically smaller than second.");
    }
    else
    {
        printf("First string is lexicographically greater than second.");
    }

    return 0;
}


/**
 * Compares two strings lexicographically. 
 */
int compare(char * str1, char * str2)
{
    while((*str1 && *str2) && (*str1 == *str2)) { str1++; str2++; }

    return *str1 - *str2;
}
bai 5 
/** 
 * C program to convert string to uppercase using pointers
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    while(*s) 
    {
        *s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
        s++;
    }

    printf("Uppercase string : %s",str);
    return 0;
}
bai 6 
/**
 * C program to convert string to lowercase
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i;
 
    /* Input string from user */
    printf("Enter any string: ");
    gets(str);


    // Iterate loop till last character of string
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lower case string: %s", str);

    return 0;
}
bai 7 
/**
 * C program to toggle case of each character in a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Toggle case function declaration */
void toggleCase(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}


/**
 * Toggle case of each character in given string
 */
void toggleCase(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}
bai 8 
/**
 * C program to count total number of alphabets, digits 
 * and special characters in a string using pointers
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits, others;

    alphabets = digits = others = 0;


    /* Input string from user */
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            digits++;
        else
            others++;

        s++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
bai 9 
/**
 * C program to count total number of vowel or consonant in a string using pointers
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE]; 
    char * s = str;
    int vowel, consonant;

    /* Input strings from user */
    printf("Enter any string: ");
    gets(str);

    vowel = 0;
    consonant = 0;

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <='Z'))
        {
            switch(*s)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowel++;
                    break;
                default:
                    consonant++;
            }
        }
        s++;
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);

    return 0;
}
bai 10 
/**
 * C program to count total number of words in a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i, words;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    i = 0;
    words = 1;

    /* Runs a loop till end of string */
    while(str[i] != '\0')
    {
        /* If the current character(str[i]) is white space */
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }

    printf("Total number of words = %d", words);

    return 0;
}

bai 11 
/**
 * C program to find reverse of a string using pointers
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    char *s = str;
    char *r = reverse;
    int len = 0;

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    /* Find length of string */
    while(*(s++)) len++;

    /* 
     * Store each character from end of original string 
     * to reverse string
     */
    s--;
    while(len >= 0)
    {
        *(r++) = *(--s);
        len--;
    }
    *r = '\0';

    printf("\nOriginal string = %s\n", str);
    printf("Reverse string = %s", reverse);

    return 0;
}
bai 12 
/**
 * C program to find reverse of a string using strrev() function
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("Original string = %s\n", str);

    /* Find the reverse of string */
    strrev(str);

    printf("Reverse string = %s", str);

    return 0;
}
bai 13 
/**
 * C program to reverse order of words in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[100], reverse[100];
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    index = 0;

    // Start checking of words from the end of string
    wordStart = len - 1;
    wordEnd   = len - 1;

    while(wordStart > 0)
    {
        // If a word is found
        if(str[wordStart] == ' ')
        {
            // Add the word to the reverse string
            i = wordStart + 1;
            while(i <= wordEnd)
            {
                reverse[index] = str[i];

                i++;
                index++;
            }
            reverse[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // Finally add the last word
    for(i=0; i<=wordEnd; i++)
    {
        reverse[index] = str[i];
        index++;
    }

    // Add NULL character at the end of reverse string
    reverse[index] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}
bai 14 
/**
 * C program to find the first occurrence of a character in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
int indexOf(const char * str, const char toFind);


int main()
{
    char str[MAX_SIZE];
    char toFind;
    int index;

    /* Input string from user and character to be searched */
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
    toFind = getchar();

    index = indexOf(str, toFind);

    if(index == -1)
        printf("'%c' not found.", toFind);
    else
        printf("'%c' is found at index %d.", toFind, index);

    return 0;
}


/**
 * Returns the first index of the given character toFind in the string. 
 * If returns -1 if the given character toFind does not exists in the string.
 */
int indexOf(const char * str, const char toFind)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == toFind)
            return i;
        i++;
    }

    // Return -1 as character not found
    return -1;
}
bai 15 
/**
 * C program to find last occurrence of a character in string
 */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/*  Function declaration */
int lastIndexOf(const char * str, const char toFind);


int main()
{
    char str[MAX_SIZE];
    char toFind;
    int index;

    printf("Enter any string: ");
    gets(str);

    printf("Enter any character to find: ");
    toFind = getchar();

    index = lastIndexOf(str, toFind);

    printf("\nLast index of '%c' is %d", toFind, index);

    return 0;
}


/**
 * Function to find last index of any character in the given string
 */
int lastIndexOf(const char * str, const char toFind)
{
    int index = -1;
    int i = 0;

    while(str[i] != '\0')
    {
        // Update index if match is found
        if(str[i] == toFind)
        {
            index = i;
        }
        i++;
    }

    return index;
}
bai 16 
/**
 * C program to search all occurrences of a character in a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size 

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i;

    /* Input string and character to search from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();

    /* Run loop till the last character of string */
    i=0;
    while(str[i]!='\0')
    {
        /* If character is found in string */
        if(str[i] == toSearch)
        {
            printf("'%c' is found at index %d\n", toSearch, i);
        }

        i++;
    }

    return 0;
}
bai 17 
/**
 * C program to count all occurrences of a character in a given string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char toSearch;
    int i, count;

    /* Input string and search character from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();

    count = 0;
    i=0;
    while(str[i] != '\0')
    {
        /*
         * If character is found in string then
         * increment count variable
         */
        if(str[i] == toSearch)
        {
            count++;
        }

        i++;
    }

    printf("Total occurrence of '%c' = %d", toSearch, count);

    return 0;
}
bai 18
/**
 * C program to find maximum occurring character in a string
 */

#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; // Store frequency of each character
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }


    /* Finds maximum frequency */
    max = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }


    printf("Maximum occurring character is '%c' = %d times.", max, freq[max]);

    return 0;
} 
bai 19 
/**
 * C program to find minimum occurring character in a string
 */

#include <stdio.h>
#define MAX_SIZE 100  // Maximum string size
#define MAX_CHARS 255 // Maximum characters allowed


int main()
{
    char str[MAX_SIZE];
    int freq[MAX_CHARS]; //Stores frequency of each character
    int i = 0, min;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    /* Initialize frequency of all characters to 0 */
    for(i=0; i<MAX_CHARS; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }


    /* Finds minimum frequency */
    min = 0;
    for(i=0; i<MAX_CHARS; i++)
    {
        if(freq[i] != 0)
        {
            if(freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }


    printf("Minimum occurring character is '%c' = %d.", min, freq[min]);

    return 0;
}
bai 20 
/**
 * C program to count frequency of each character in a string
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    int i, len;
    int freq[26];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    len = strlen(str);

    /* Initialize frequency of each character to 0 */
    for(i=0; i<26; i++)
    {
        freq[i] = 0;
    }


    /* Find total number of occurrences of each character */
    for(i=0; i<len; i++)
    {
        /* If the current character is lowercase alphabet */
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i] - 65]++;
        }
    }

    /* Print the frequency of all characters in the string */
    printf("\nFrequency of all characters in the given string: \n");
    for(i=0; i<26; i++)
    {
        /* If current character exists in given string */
        if(freq[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97), freq[i]);
        }
    }

    return 0;
}
bai 21 
/**
 * C program to remove first occurrence of a character from the given string.
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void removeFirst(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeFirst(str, toRemove);

    printf("String after removing first '%c' : %s", toRemove, str);

    return 0;
}


/**
 * Function to remove first occurrence of a character from the string.
 */
void removeFirst(char * str, const char toRemove)
{
    int i = 0;
    int len = strlen(str);

    /* Run loop till the first occurrence of the character is not found */
    while(i<len && str[i]!=toRemove)
        i++;

    /* Shift all characters right to the position found above, to one place left */
    while(i < len)
    {
        str[i] = str[i+1];
        i++;
    }
}
bai 22 
/**
 * C program to remove last occurrence of a character from the given string.
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void removeLast(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeLast(str, toRemove);

    printf("String after removing last '%c' : %s", toRemove, str);

    return 0;
}


/**
 * Function to remove last occurrence of a character from the string.
 */
void removeLast(char * str, const char toRemove)
{
    int i, lastPosition;
    int len = strlen(str);

    /* Assume that character does not exist in string */
    lastPosition = -1;
    i=0;

    while(i<len)
    {
        if(str[i] == toRemove)
        {
            lastPosition = i;
        }

        i++;
    }

    /* If character exists in string */
    if(lastPosition != -1)
    {
        i = lastPosition;

        /*
         * Shift all characters right to the position found above to left
         */
        while(i<len)
        {
            str[i] = str[i+1];
            i++;
        }
    }
}
bai 23 
/**
 * C program to remove all occurrences of a character from the given string.
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/** Function declaration */
void removeAll(char *, const char);


int main()
{
    char str[MAX_SIZE];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeAll(str, toRemove);

    printf("String after removing '%c': %s", toRemove, str);

    return 0;
}


/**
 * Function to remove all occurrences of a character from the string.
 */
void removeAll(char * str, const char toRemove)
{
    int i, j;
    int len = strlen(str);

    for(i=0; i<len; i++)
    {
        /*
         * If the character to remove is found then shift all characters to one
         * place left and decrement the length of string by 1.
         */
        if(str[i] == toRemove)
        {
            for(j=i; j<len; j++)
            {
                str[j] = str[j+1];
            }

            len--;

            // If a character is removed then make sure i doesn't increments
            i--;
        }
    }
}
bai 24 
/**
 * C program to replace first occurrence of a character with another in a string
 */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void replaceFirst(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Used to skip extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: %s\n", str);

    replaceFirst(str, oldChar, newChar);

    printf("String after replacing first '%c' with '%c' : %s", oldChar, newChar, str);

    return 0;
}


/**
 * Replace first occurrence of a character with
 * another in given string.
 */
void replaceFirst(char * str, char oldChar, char newChar)
{
    int i=0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If an occurrence of character is found */
        if(str[i] == oldChar)
        {
            str[i] = newChar;
            break;
        }

        i++;
    }
}
bai 25 
/**
 * C program to replace first occurrence of a character with another in a string
 */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void replaceFirst(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Used to skip extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: %s\n", str);

    replaceFirst(str, oldChar, newChar);

    printf("String after replacing first '%c' with '%c' : %s", oldChar, newChar, str);

    return 0;
}


/**
 * Replace first occurrence of a character with
 * another in given string.
 */
void replaceFirst(char * str, char oldChar, char newChar)
{
    int i=0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If an occurrence of character is found */
        if(str[i] == oldChar)
        {
            str[i] = newChar;
            break;
        }

        i++;
    }
}
bai 26 
/**
 * C program to replace last occurrence of a character with another in a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void replaceLast(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Dummy getchar() to eliminate extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: \n%s", str);

    replaceLast(str, oldChar, newChar);

    printf("\n\nString after replacing '%c' with '%c': \n%s", oldChar, newChar, str);

    return 0;
}


/**
 * Replace last occurrence of a character with 
 * another in given string.
 */
void replaceLast(char * str, char oldChar, char newChar)
{
    int i, lastIndex;

    lastIndex = -1;
    i = 0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If an occurrence of character is found */
        if(str[i] == oldChar)
        {
            lastIndex = i;
        }

        i++;
    }

    if(lastIndex != -1)
    {
        str[lastIndex] = newChar;
    }
}
bai 27 
/**
 * C program to replace all occurrence of a character with another in a string
 */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void replaceAll(char * str, char oldChar, char newChar);


int main()
{
    char str[MAX_SIZE], oldChar, newChar;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to replace: ");
    oldChar = getchar();

    // Dummy getchar() to eliminate extra ENTER character
    getchar();

    printf("Enter character to replace '%c' with: ", oldChar);
    newChar = getchar();


    printf("\nString before replacing: \n%s", str);

    replaceAll(str, oldChar, newChar);

    printf("\n\nString after replacing '%c' with '%c' : \n%s", oldChar, newChar, str);

    return 0;
}


/**
 * Replace all occurrence of a character in given string.
 */
void replaceAll(char * str, char oldChar, char newChar)
{
    int i = 0;

    /* Run till end of string */
    while(str[i] != '\0')
    {
        /* If occurrence of character is found */
        if(str[i] == oldChar)
        {
            str[i] = newChar;
        }

        i++;
    }
}
bai 28 
/**
 * C program to find the first occurrence of a word in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE], word[MAX_SIZE];
    int i, index, found = 0;

    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to be searched: ");
    gets(word);


    /* Run loop from start to end of string */
    index = 0;
    while(str[index] != '\0')
    {

        /* If first character of word matches with the given string */
        if(str[index] == word[0])
        {
            /* Match entire word with current found index */
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }

                i++;
            }
        }
        
        /* If the word is found then get out of loop */
        if(found == 1)
        {
            break;
        }

        index++;
    }
    
    /*  Print success message if the word is found */
    if(found == 1)
    {
        printf("\n'%s' is found at index %d.", word, index);
    }
    else
    {
        printf("\n'%s' is not found.", word);
    }

    return 0;
}
bai 29 
/**
 * C program to find last occurrence of a word in given string
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, index, found;
    int strLen, wordLen;

    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter any word to search: ");
    gets(word);

    index = -1;
    strLen  = strlen(str);   // Find length of string
    wordLen = strlen(word);  // Find length of word


    /*
     * Runs a loop from starting index of string to
     * length of string - word length
     */
    for(i=0; i<=strLen - wordLen; i++)
    {
        // Match word at current position
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            //If word is not matched
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        // If word have been found then store the current found index
        if(found == 1)
        {
            index = i;
        }
    }

    if(index == -1)
    {
        printf("\n'%s' not found.", word);
    }
    else
    {
        printf("\nLast index of '%s' = %d", word, index);
    }

    return 0;
}
bai 30 
/**
 * C program to find last occurrence of a word in given string
 */

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found;
    int strLen, wordLen;

    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter any word to search: ");
    gets(word);

    strLen  = strlen(str);  // Find length of string
    wordLen = strlen(word); // Find length of word


    /*
     * Run a loop from starting index of string to
     * length of string - word length
     */
    for(i=0; i<strLen - wordLen; i++)
    {
        // Match word at current position
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            // If word is not matched
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        // If word have been found then print found message
        if(found == 1)
        {
            printf("'%s' found at index: %d \n", word, i);
        }
    }

    return 0;
}
bai 31 
/**
 * C program to count occurrences of a word in a given string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
int countOccurrences(char * str, char * toSearch);


int main()
{
    char str[MAX_SIZE];
    char toSearch[MAX_SIZE];
    int count;

    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to search occurrences: ");
    gets(toSearch);

    count = countOccurrences(str, toSearch);

    printf("Total occurrences of '%s': %d", toSearch, count);

    return 0;
}


/**
 * Get, total number of occurrences of a word in a string
 */
int countOccurrences(char * str, char * toSearch)
{
    int i, j, found, count;
    int stringLen, searchLen;

    stringLen = strlen(str);      // length of string
    searchLen = strlen(toSearch); // length of word to be searched

    count = 0;

    for(i=0; i <= stringLen-searchLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            count++;
        }
    }

    return count;
}
bai 32 
/**
 * C program to remove the first occurrence of a word in a string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/** Function declaration */
void removeFirst(char * str, const char * toRemove);


int main()
{
    char str[MAX_SIZE];
    char toRemove[MAX_SIZE];

    /* Input string and word to be removed from user  */
    printf("Enter any string: ");
    gets(str);
    printf("Enter string to be removed: ");
    gets(toRemove);

    removeFirst(str, toRemove);

    printf("\nString after removing '%s': \n%s", toRemove, str);

    return 0;
}


/**
 * Remove first occurrence of a word from string
 */
void removeFirst(char * str, const char * toRemove)
{
    int i, j;
    int len, removeLen;
    int found = 0;

    len = strlen(str);
    removeLen = strlen(toRemove);

    for(i=0; i<len; i++)
    {
        found = 1;
        for(j=0; j<removeLen; j++)
        {
            if(str[i+j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }

        /* If word has been found then remove it by shifting characters  */
        if(found == 1)
        {
            for(j=i; j<=len-removeLen; j++)
            {
                str[j] = str[j + removeLen];
            }

            // Terminate from loop so only first occurrence is removed
            break;
        }
    }
}
bai 33 
/**
 * C program to remove last occurrence of a word in given string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int i, j, found, index;
    int stringLen, wordLen;


    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to remove: ");
    gets(word);

    stringLen = strlen(str);  // Length of string
    wordLen   = strlen(word); // Length of word


    /*
     * Run loop from start to end of string - word length
     */
    index = -1;
    for(i=0; i<stringLen - wordLen; i++)
    {
        // Match word at current position
        found = 1;
        for(j=0; j<wordLen; j++)
        {
            // If word is not matched
            if(str[i+j] != word[j])
            {
                found = 0;
                break;
            }
        }

        // If word is found then update index
        if(found == 1)
        {
            index = i;
        }
    }

    // If word not found
    if(index == -1)
    {
        printf("'%s' not found.");
    }
    else
    {
        /*
         * Shift all characters from right to left
         */
        for(i=index; i <= stringLen - wordLen; i++)
        {
            str[i] = str[i + wordLen];
        }

        printf("String after removing last '%s': \n%s", word, str);
    }

    return 0;
}
bai 34 
/**
 * C program to remove all occurrences of a word in given string
 */
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void removeAll(char * str, char * toRemove);


int main()
{
    char str[MAX_SIZE];
    char toRemove[MAX_SIZE];

    /* Input string and word from user */
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to remove: ");
    gets(toRemove);

    printf("String before removing '%s' : \n%s", toRemove, str);

    removeAll(str, toRemove);

    printf("\n\nString after removing '%s' : \n%s", toRemove, str);

    return 0;
}


/**
 * Remove all occurrences of a given word in string.
 */
void removeAll(char * str, char * toRemove)
{
    int i, j, stringLen, toRemoveLen;
    int found;

    stringLen   = strlen(str);      // Length of string
    toRemoveLen = strlen(toRemove); // Length of word to remove


    for(i=0; i <= stringLen - toRemoveLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j<toRemoveLen; j++)
        {
            if(str[i + j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }

        /* If it is not a word */
        if(str[i + j] != ' ' && str[i + j] != '\t' && str[i + j] != '\n' && str[i + j] != '\0') 
        {
            found = 0;
        }

        /*
         * If word is found then shift all characters to left
         * and decrement the string length
         */
        if(found == 1)
        {
            for(j=i; j<=stringLen - toRemoveLen; j++)
            {
                str[j] = str[j + toRemoveLen];
            }

            stringLen = stringLen - toRemoveLen;

            // We will match next occurrence of word from current index.
            i--;
        }
    }
}
bai 35 
/**
 * C program to trim leading white space characters from a string
 */
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trimLeading(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming leading whitespace: \n%s", str);

    trimLeading(str);

    printf("\n\nString after trimming leading whitespace: \n%s", str);

    return 0;
}


/**
 * Remove leading whitespace characters from string
 */
void trimLeading(char * str)
{
    int index, i, j;

    index = 0;

    /* Find last index of whitespace character */
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }


    if(index != 0)
    {
        /* Shit all trailing characters to its left */
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0'; // Make sure that string is NULL terminated
    }
}
bai 36 
/**
 * C program to trim trailing white space characters from a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trimTrailing(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming trailing white space: \n'%s'", str);

    trimTrailing(str);

    printf("\n\nString after trimming trailing white spaces: \n'%s'", str);

    return 0;
}

/**
 * Remove trailing white space characters from string
 */
void trimTrailing(char * str)
{
    int index, i;

    /* Set default index */
    index = -1;

    /* Find last index of non-white space character */
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index= i;
        }

        i++;
    }

    /* Mark next character to last non-white space character as NULL */
    str[index + 1] = '\0';
}
bai 37 
/**
 * C program to trim both leading and trailing white space characters from a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
void trim(char * str);


int main()
{
    char str[MAX_SIZE];

    /* Input string from user */
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming white space: \n'%s'", str);

    trim(str);

    printf("\n\nString after trimming white space: \n'%s'", str);

    return 0;
}


/**
 * Remove leading and trailing white space characters
 */
void trim(char * str)
{
    int index, i;

    /*
     * Trim leading white spaces
     */
    index = 0;
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n')
    {
        index++;
    }

    /* Shift all trailing characters to its left */
    i = 0;
    while(str[i + index] != '\0')
    {
        str[i] = str[i + index];
        i++;
    }
    str[i] = '\0'; // Terminate string with NULL


    /*
     * Trim trailing white spaces
     */
    i = 0;
    index = -1;
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            index = i;
        }

        i++;
    }

    /* Mark the next character to last non white space character as NULL */
    str[index + 1] = '\0';
}
bai 38 
/**
 * C program to remove extra blank spaces from a given string
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum string size

/* Function declaration */
char * removeBlanks(const char * str);


int main()
{
    char str[MAX_SIZE];
    char * newString;

    printf("Enter any string: ");
    gets(str);

    printf("\nString before removing blanks: \n'%s'", str);

    newString = removeBlanks(str);

    printf("\n\nString after removing blanks: \n'%s'", newString);

    return 0;
}


/**
 * Removes extra blank spaces from the given string
 * and returns a new string with single blank spaces
 */
char * removeBlanks(const char * str)
{
    int i, j;
    char * newString;

    newString = (char *)malloc(MAX_SIZE);

    i = 0;
    j = 0;

    while(str[i] != '\0')
    {
        /* If blank space is found */
        if(str[i] == ' ')
        {
            newString[j] = ' ';
            j++;

            /* Skip all consecutive spaces */
            while(str[i] == ' ')
                i++;
        }

        newString[j] = str[i];

        i++;
        j++;
    }
    // NULL terminate the new string
    newString[j] = '\0';

    return newString;
}


////////////////////////////////////////////////////////////////////CAC CON VEO THI PASS XANH LE ////////////////////////////////////////////////////////////////////////////////////////////////////

