#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // print index of the array
    printf("Index of the array: %d", arr[6]);
    return 0;
}