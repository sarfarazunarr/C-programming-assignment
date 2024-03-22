/*Write a C Program to count the number of characters and spaces in the input supplied from a file.*/
#include <stdio.h>

int main() {
    FILE *file_ptr;
    char filename[100];
    char ch;
    int char_count = 0, space_count = 0;

    // Input phase: Prompt user to enter the filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file_ptr = fopen(filename, "r");

    // Check if file opened successfully
    if (file_ptr == NULL) {
        printf("Error opening the file.\n");
        return 1; // Return 1 to indicate error
    }

    // Read characters from file and count characters and spaces
    while ((ch = fgetc(file_ptr)) != EOF) {
        if (ch == ' ') {
            space_count++;
        } else {
            char_count++;
        }
    }

    // Close the file
    fclose(file_ptr);

    // Output phase: Print the results
    printf("Number of characters: %d\n", char_count);
    printf("Number of spaces: %d\n", space_count);

    return 0;
}
