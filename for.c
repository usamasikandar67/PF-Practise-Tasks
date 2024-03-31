#include <stdio.h>

int main() {
    int stars, rows;
    
    printf("Enter the number of stars: ");
    scanf("%d", &stars);
    
    rows = stars;
    int count = 0;
    int i = 0;

    while (i < stars * rows) {
        printf("*");
        count++;
        if (count == stars) {
            printf("\n");
            count = 0; 
        }

        i++; 
    }

    return 0;
}
