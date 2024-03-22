/*
Write a C Program to open a file named ”DATA” and write a line of text in it by reading the text from the keyboard.
*/
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char line[100];

    // Open file named "DATA" in write mode
    file_ptr = fopen("DATA.txt", "w");

    // Check if file opened successfully
    if (file_ptr == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return 1 to indicate error
    }

    // Prompt user to enter a line of text
    printf("Enter a line of text to write into the file: ");
    fgets(line, sizeof(line), stdin);

    // Write the line of text into the file
    fprintf(file_ptr, "%s", line);

    fclose(file_ptr);

    printf("Data written to file successfully.\n");
    return 0;
}
