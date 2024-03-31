#include <stdio.h>

void compareNumbers(int a, int b, int c) {
    if (a > b) {
        if (b > c) {
            printf("a is greater\n");
        } else {
            printf("b is greater\n");
        }
    } else {
        if (b > c) {
            printf("b is greater\n");
        } else {
            if (a == b && b == c) {
                printf("Numbers are equal\n");
            } else {
                printf("c is greater\n");
            }
        }
    }
}

int main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    compareNumbers(a, b, c);

    return 0;
}
