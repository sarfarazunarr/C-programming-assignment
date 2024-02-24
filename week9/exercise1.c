/*
Given the following piece of code

int i = 10; char c= ’A’; double f = 25.5; int *iptr = &i;
char *cptr = &c;
You are expected to display the result of following statements in the given format.
*/
#include <stdio.h>

int main() {
    // By Sarfaraz 2K23-BSCS-21
    int i = 10;
    char c = 'A';
    double f = 25.5;
    int* iptr = &i;
    char* cptr = &c;

    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", (void*)&i);
    printf("Size of i: %lu bytes\n", sizeof(i));
    printf("Value pointed by iptr: %d\n", *iptr);
    printf("Address stored in iptr: %p\n", (void*)iptr);
    printf("Size of iptr: %lu bytes\n", sizeof(iptr));
    
    printf("\nValue of c: %c\n", c);
    printf("Address of c: %p\n", (void*)&c);
    printf("Size of c: %lu bytes\n", sizeof(c));
    printf("Value pointed by cptr: %c\n", *cptr);
    printf("Address stored in cptr: %p\n", (void*)cptr);
    printf("Size of cptr: %lu bytes\n", sizeof(cptr));

    return 0;
}
