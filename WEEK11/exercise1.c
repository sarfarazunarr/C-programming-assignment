/*
Write a program which should take an organization name from the user and then print the abbreviation on the screen. E.g. Organization Name is Pakistan Steel and its abbreviation is PS
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char orgName[100]; 
    char abbreviation[10]; 
    int abbrIndex = 0;

    printf("Enter the organization name: ");
    fgets(orgName, sizeof(orgName), stdin);

    for (int i = 0; orgName[i] != '\0'; i++) {
        if (i == 0 || orgName[i - 1] == ' ') {
            abbreviation[abbrIndex++] = toupper(orgName[i]);
        }
    }
    abbreviation[abbrIndex] = '\0';

    printf("Abbreviation: %s\n", abbreviation);

    return 0;
}
