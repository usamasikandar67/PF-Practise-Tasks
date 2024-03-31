#include <stdio.h>

void bsort(int arr[], int size) {
	int i,j;
    for ( i = 0; i < size - 1; i++) {  // iterate for total elements in array
        for ( j = 0; j < size - i - 1; j++) { // with each iteration leave end
            // Compare adjacent elements and swap if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int size = 8;
	
	int i,ii;
    // actual  array
      for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform Bubble Sort
    bsort(arr, size);

    // Display the sorted array
    printf("Bubble Sorted Array ");
    for ( ii = 0; ii < size; ii++) {
        printf("%d ", arr[ii]);
    }
    printf("\n");
}
