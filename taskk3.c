#include <stdio.h>

int main() {
    int num;

    printf("Enter a number (1, 2, or 3): ");
    scanf("%d", &num);

    printf("Table of %d:\n", num);
    
    int i = 1;
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    if (num > 1) {
        printf("\nTable of %d:\n", num - 1);
        i = 1;
        while (i <= 10) {
            printf("%d x %d = %d\n", num - 1, i, (num - 1) * i);
            i++;
        }
    }

    if (num > 2) {
        printf("\nTable of %d:\n", num - 2);
        i = 1;
        while (i <= 10) {
            printf("%d x %d = %d\n", num - 2, i, (num - 2) * i);
            i++;
        }
    }

    return 0;
}