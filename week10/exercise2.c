/*
Exercise 2:
Write, compile and execute the program below. Explain why the function swap does not work properly. Using pointers, change the program to make the function swap to work properly.

Code:
#include <stdio.h> #include <stdlib.h>
void swap (int a, int b); int main()
{
int c = 10, d = 25;
printf("\nBefore calling the function swap, c=%d and d=%d", c, d); swap(c,d);
printf("\nAfter calling the function swap, c=%d and d=%d\n", c, d); return 0;
}
void swap(int a, int b)
{
int temp; temp = a; a = b;
b = temp;
}

//Description: The function swap does not work properly because it receives the arguments a and b by value. This means that when you pass variables c and d to swap, only copies of their values are passed to the function. Therefore, swapping a and b inside the swap function does not affect the original variables c and d in the main function.

To fix this issue, you need to pass the addresses of c and d (pointers to c and d) to the swap function so that the function can directly modify the values of c and d in memory.
*/
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main() {
    int c = 10, d = 25;
    
    printf("\nBefore calling the function swap, c=%d and d=%d", c, d);
    swap(&c, &d); // Passing addresses of c and d
    printf("\nAfter calling the function swap, c=%d and d=%d\n", c, d);
    
    return 0;
}

void swap(int *a, int *b) {
    int temp;
    temp = *a; // Dereferencing pointer to get the value stored at that address
    *a = *b;   // Dereferencing pointer to assign new value
    *b = temp; // Dereferencing pointer to assign new value
}
