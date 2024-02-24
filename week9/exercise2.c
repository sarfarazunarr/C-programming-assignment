/*
Implement the swap function to exchange the contents of the two variables using pointer notation for parameter passing.
*/
#include <stdio.h>
//By Sarfaraz 2K23-BSCS-21
int swap(int *a, int *b){
    int hold;
    hold = *a;
    *a = *b;
    *b = hold;
    return hold;
}
int main() {
    int a = 30, b = 20;
    printf("\nBefore swapping");
    printf("\nx=%d,y=%d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping");
    printf("\nx=%d, y=%d", a, b);
    return 0;
}
