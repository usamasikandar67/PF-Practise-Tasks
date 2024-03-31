#include <stdio.h>

int main() {
    int stars, rows;
    
    printf("Enter the number of stars: ");
    scanf("%d", &stars);
    
    rows = 1;

    while (stars > 0) {
        if (rows <= stars) {
            printf("*");
            rows++;
        } else {
            printf("\n");
            rows = 1;
            stars--;
        }
    }

    return 0;
}
