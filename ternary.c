#include<stdio.h>

void input() {
    float x, y, z;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);

    if (x == y && y == z) {
        printf("All numbers are equal\n");
    } else if (x >= y && x >= z) {
        printf("x is highest\n");
        if (y >= z) {
            printf("y is middle\n");
            printf("z is minimum\n");
        } else {
            printf("z is middle\n");
            printf("y is minimum\n");
        }
    } else if (y >= x && y >= z) {
        printf("y is highest\n");
        if (x >= z) {
            printf("x is middle\n");
            printf("z is minimum\n");
        } else {
            printf("z is middle\n");
            printf("x is minimum\n");
        }
    } else {
        printf("z is highest\n");
        if (x >= y) {
            printf("x is middle\n");
            printf("y is minimum\n");
        } else {
            printf("y is middle\n");
            printf("x is minimum\n");
        }
    }
}

int main() {
    input();
    return 0;
}
