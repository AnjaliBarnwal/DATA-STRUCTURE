// A program to pass an array to a function using call by refrence ,update the array value in the function ,print the array elements boty in the function and in the calling function
#include <stdio.h>

#define SIZE 5
void updateArray(int *arr, int size);
void printArray(const int *arr, int size);

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5};

    // Print the original array
    printf("Original array in main:\n");
    printArray(array, SIZE);

    // Pass the array to the function and update its values
    updateArray(array, SIZE);

    // Print the array after the function call
    printf("Array after updateArray function:\n");
    printArray(array, SIZE);

    return 0;
}
