#include <stdio.h>
#define SIZE 10 
int main(){
    char a, b, c, *p, *q, *r;
    printf("\nAddress of a = %lu", &a);
    printf("\nAddress of b = %lu", &b);
    printf("\nAddress of c = %lu", &c);
    printf("\nAddress of p = %lu", &p);
    printf("\nAddress of q = %lu", &q);
    printf("\nAddress of r = %lu", &r);
    printf("\nSize of char = %d", sizeof(char));
    printf("\nSize of char* = %d", sizeof(char *));
    return 0;
}
