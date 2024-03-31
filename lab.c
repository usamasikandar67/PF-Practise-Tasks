#include <stdio.h>
int main() {
    int rows,i = 1, spaces, stars;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    spaces = rows - 1;
    stars = 1;
    while (i <= rows) {
        // Print spaces
        int j = 1;
        while (j <= spaces) {
            printf(" ");
            j++;
        }
        j = 1;
        while (j <= stars) {
            printf("*");
            j++;
        }
        printf("\n");
        spaces--;
        stars++;
        i++;
    }
    return 0;
}