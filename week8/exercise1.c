/*
Write a program to declare an integer array of 50 elements.
A.	Write a function getArray() to get array input from the user that will be used to initialize the first thirty five (35) elements of the array by getting input from the user. The rest of the 15 entries would be set to zero (0).
B.	Write a function FindEven() to find the total numbers of even numbers in the given array.
C.	Write a function ModifyArray() to make the each array element to a multiple of four(04).
D.	Write a function named ’FindMin()’ that will find the smallest element in the given array and return the smallest element.
*/
#include <stdio.h>
#define ARRAY_SIZE 50
void getArray(int arr[], int size){
    printf("Enter first 35 elements of array: \n");
    for(int i = 0; i < 35; i++){
        printf("Enter element (%d): ", i + 1);
        scanf("%d", &arr[i]);
    };
    for(int i = 35; i <= size; i++){
        arr[i] = 0;
    };
    printf("Get array function: \n");
    for(int i = 0; i <= size; i++){
        printf(" %d ", arr[i]);
        
    }
}
int findEven(int arr[], int size){
    int evens = 0;
    for(int i = 0; i <= size; i++){
        if(arr[i] % 2 == 0){
            evens++;
        };
    };
    printf("\nEven numbers are: %d", evens);
    return evens;
}
int modifyArray(int arr[], int size){
    for (int i = 0; i <= size; i++){
        arr[i] = arr[i] * 4;
    }
     printf("\nModified Array: \n");
    for(int i = 0; i <= size; i++){
        printf(" %d ", arr[i]);
        
    }
    return arr;
}
int findMin(int arr[], int size){
    int min = arr[0];
    for (int i = 0; i <= size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("\nSmallest number is: %d", min);
    return min;
}
int main(){
    int myArray[ARRAY_SIZE];
    getArray(myArray, ARRAY_SIZE);
    modifyArray(myArray, ARRAY_SIZE);
    findEven(myArray, ARRAY_SIZE);
    findMin(myArray, ARRAY_SIZE);
    
    printf("\nBy Sarfaraz 2K23-BSCS-21");
    return 0;
}
