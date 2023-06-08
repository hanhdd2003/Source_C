#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 100
char* removeMultipleSpaces(char inputString[MAX_LENGTH]) {
    static char outputString[MAX_LENGTH];  // static variable to hold output string
    int i = 0, j = 0;
    int spaceCount = 0;  // count consecutive spaces
    while (inputString[i] != '\0') {
        if (inputString[i] == ' ') {  // if space found
            spaceCount++;
            if (spaceCount == 1) {  // if first space, add to output string
                outputString[j] = ' ';
                j++;
            }
        }
        else {  // if non-space character found
            outputString[j] = inputString[i];
            j++;
            spaceCount = 0;
        }
        i++;
    }
    outputString[j] = '\0';  // add null terminator to end of output string
    return outputString;
}
//that's great. please help me write another function named 
//char* trimString(char inputString[MAX_LENGTH]) 
//which remove all white spaces at the begin and at the end of inputString in C
char* trimString(char inputString[MAX_LENGTH]) {
    int start = 0, end = strlen(inputString) - 1;
    // Find the first non-whitespace character from the beginning
    while (isspace(inputString[start])) {
        start++;
    }
    // Find the first non-whitespace character from the end
    while (end >= start && isspace(inputString[end])) {
        end--;
    }
    // Copy the trimmed string to a new buffer
    char* trimmedString = malloc((end - start + 2) * sizeof(char));
    strncpy(trimmedString, inputString + start, end - start + 1);
    trimmedString[end - start + 1] = '\0';
    return trimmedString;
}
int main() {
    char inputString[MAX_LENGTH] = "   Hello    world!     How are you today?   ";
    printf("Raw string before process: %s\n", inputString);
    char* outputString = trimString(removeMultipleSpaces(inputString));
    printf("%s", outputString);
    return 0;
}
