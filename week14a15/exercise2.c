/*
Write a C Program to read the contents of file ’File1’ and paste the contents at the beginning of another file ’File2’.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

int main() {
    FILE *file1, *file2;
    char buffer[MAX_SIZE];
    int count;

    // Open File1 in read mode
    file1 = fopen("File1.txt", "r");
    if (file1 == NULL) {
        perror("Error opening File1");
        return EXIT_FAILURE;
    }

    // Open File2 in read mode
    file2 = fopen("File2.txt", "r");
    if (file2 == NULL) {
        perror("Error opening File2");
        fclose(file1);
        return EXIT_FAILURE;
    }

    // Read the contents of File1
    count = fread(buffer, 1, MAX_SIZE, file1);
    if (count <= 0) {
        perror("Error reading from File1");
        fclose(file1);
        fclose(file2);
        return EXIT_FAILURE;
    }

    // Close File1
    fclose(file1);

    // Open File2 in append mode
    file2 = fopen("File2.txt", "a");
    if (file2 == NULL) {
        perror("Error opening File2");
        return EXIT_FAILURE;
    }

    // Write the contents of File1 to the beginning of File2
    count = fwrite(buffer, 1, count, file2);
    if (count <= 0) {
        perror("Error writing to File2");
        fclose(file2);
        return EXIT_FAILURE;
    }

    // Close File2
    fclose(file2);

    printf("Contents of File1 copied to the beginning of File2 successfully.\n");

    return 0;
}
