#include<stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the given size
    int arr[size];

    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find maximum and minimum elements in the array
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
