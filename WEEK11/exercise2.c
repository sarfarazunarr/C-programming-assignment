/*
    Write code for the following functions:
A.	int strlen(const char *s); [returns string length]
B.	char* strcpy(char *s1, const char *s2); [Copies string s2 into array s1. The value of s1 is returned.]
C.	char* strcat(char *s1,const char *s2); [Appends string s2 to array s1. The first character of s2 overwrites the terminating null character of s1. The value of s1 is returned.] Use above function in your program to get and print length of a string, copy str1 to str2 and append str2 at the end of str1. Do not use string.h header file in your programme.

*/

#include <stdio.h>

// Function to calculate the length of a string
int my_strlen(const char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

// Function to copy a string
char* my_strcpy(char *s1, const char *s2) {
    char *dest = s1;
    while ((*s1++ = *s2++) != '\0');
    return dest;
}

// Function to concatenate two strings
char* my_strcat(char *s1, const char *s2) {
    char *dest = s1;
    while (*s1 != '\0') {
        s1++;
    }
    while ((*s1++ = *s2++) != '\0');
    return dest;
}

int main() {
    char str1[100], str2[100];

    // Input phase
    printf("Enter a string: ");
    scanf("%s", str1);

    // Calculating length of string and printing
    printf("Length of string: %d\n", my_strlen(str1));

    // Copying str1 to str2 and printing str2
    printf("Copying string...\n");
    my_strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // Appending str2 to str1 and printing str1
    printf("Appending string...\n");
    my_strcat(str1, str2);
    printf("Appended string: %s\n", str1);

    return 0;
}
