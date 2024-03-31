#include <stdio.h>

int main() {
    int rows, i = 1, spaces, stars;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    spaces = rows - 1;
    stars = 1;

    while (i <= rows) {
        if (spaces > 0) {
            printf(" ");
            spaces--;
        } else {
            printf("*");
            stars++;
            if (stars > i) {
                printf("\n");
                i++;
                spaces = rows - i;
                stars = 1;
            }
        }
    }

    return 0;
}