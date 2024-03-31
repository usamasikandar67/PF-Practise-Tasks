#include<stdio.h> 

void grade() {
    float number;
    
    printf("Enter your number: ");
    scanf("%f", &number);

    if (number < 0 || number > 100) {
        printf("Invalid Input\n");
        return;
    }

    int gradeValue;
    if (number >= 90 && number <= 100) {
        gradeValue = 4;
    } 
    else if (number >= 80) {
        gradeValue = 3;
    } 
    else if (number >= 70) {
        gradeValue = 2;
    } 
    else if (number >= 60) {
        gradeValue = 1;
    } 
    else {
        gradeValue = 0;
    }

    switch (gradeValue) {
        case 4:
            printf("Your Grade is 'A'\n");
            break;
        case 3:
            printf("Your Grade is 'B'\n");
            break;
        case 2:
            printf("Your Grade is 'C'\n");
            break;
        case 1:
            printf("Your Grade is 'D'\n");
            break;
        default:
            printf("Your Grade is 'F'\n");
            break;
    }
}

int main() {
    grade();
    return 0;
}
