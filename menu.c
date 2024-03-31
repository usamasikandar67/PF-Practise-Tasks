#include<stdio.h>

int menu(){
    printf("///////////////////WELCOME///////////////////\n");
    printf("1: Calculate Area\n2: Calculate Volume\n3: Calculate Perimeter\n");
    return 0; // Add a return statement
} 

int cal_area(){
    float result1, length, width;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    result1 = (length * width);
    printf("\nArea of Rectangle is: %.2f\n", result1);
    return 0;
} 

int cal_volume(){
    float result, length, width, height;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    result = (length * width * height);
    printf("\nVolume of Rectangle is: %.2f\n", result);
    return 0;
}

int cal_perimeter(){
    float result, side;
    printf("Enter length of one side: ");
    scanf("%f", &side);
    result = (4 * side);
    printf("\nPerimeter of Square is: %.2f\n", result);
    return 0;
}

int main(){
    int start; 
    menu();
    scanf("%d", &start);
    switch(start) {
        case 1:
            cal_area();
            break;
        case 2:
            cal_volume();
            break;
        case 3:
            cal_perimeter();
            break;
        default:
            printf("Invalid Input\n");
            break;
    } 
    return 0;
}
