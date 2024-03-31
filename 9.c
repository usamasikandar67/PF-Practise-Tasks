#include<stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Ensure the array size is at least 2
    if (size < 2) {
        printf("Array size should be at least 2.\n");
        return 1; // Return a non-zero value to indicate an error
    }

    // Declare an array of the given size
    int arr[size];

    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and secondMax with the first two elements of the array
    int max = (arr[0] > arr[1]) ? arr[0] : arr[1];
    int secondMax = (arr[0] > arr[1]) ? arr[1] : arr[0];

    // Find the second maximum element in the array
    for (int i = 2; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    // Print the result
    printf("Second Maximum element: %d\n", secondMax);

    return 0;
}
