#include<stdio.h>

void input() {
    float x, y, z;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);

    (x > y && x > z) ?
        (y > z) ?
            printf("X IS GREATER \nY is medium\nZ is minimum\n") :
            printf("X IS GREATER\nZ IS medium\nY is minimum\n") :
        (y > x && y > z) ?
            (x > z) ?
                printf("Y IS GREATER\nX Is second\nZ is min\n") :
                printf("Y IS GREATER\nZ is second\nX is min\n"):
        (z > x  && z > y) ?
        (z > x) ?
                printf("Z IS GREATER \nX Is second\nY is min\n") :
                printf("Z IS GREATER\nY is second\nX is min\n") :
            printf("ALL NUMBERS ARE EQUAL \n");
}

int main() {
    input();
    return 0;
}
