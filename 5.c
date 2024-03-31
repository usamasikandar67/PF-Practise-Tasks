#include<stdio.h>

int main() {
    int array[4] = {1, 4, 5, 6};
    int arr2[4] = {4, 2, 1, 4};
    int result[4];

    for (int i = 0; i < 4; i++) {
        result[i] = array[i] - arr2[i];
    }

    printf("Subtraction result: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
