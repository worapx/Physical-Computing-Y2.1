#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort (ascending order)
int compare(const void *a, const void *b);

int main() {
    int *arr = NULL;        // Pointer to the dynamic array
    int size = 0;           // Current number of elements in the array
    int capacity = 10;      // Initial capacity of the array
    int num;                // Variable to store user input

    // Allocate initial memory for the array
    arr = (int *) malloc(capacity * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input loop: Read integers until the user enters -1
    while (1) {
        scanf(" %d", &num);
        if (num == -1)
            break;

        // Resize the array if it's full
        if (size >= capacity) {
            capacity *= 2;
            int *temp = (int *) realloc(arr, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory allocation failed.\n");
                free(arr);
                return 1;
            }
            arr = temp;
        }

        // Add the new element to the array using pointer arithmetic
        *(arr + size) = num;
        size++;
    }

    // Print the original array
    printf("You entered: ");
    int *ptr = arr;
    int count = size;
    while (count--) {
        printf("%d ", *ptr++);
    }
    printf("\n");

    // Sort the array using qsort
    qsort(arr, size, sizeof(int), compare);

    // Print the sorted array
    ptr = arr;
    count = size;
    printf("Sorted array: ");
    while (count--) {
        printf("%d ", *ptr++);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    return 0;
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
