#include <stdio.h>
#include <stdlib.h>  // For malloc and free

int main() {
    int size;

    // Ask for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program if malloc fails
    }

    // Input values into the array
    for (int i = 0; i < size; i++) {
        printf("Enter number for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Display the stored values
    printf("You entered: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
