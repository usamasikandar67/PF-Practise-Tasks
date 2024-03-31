#include<stdio.h> 
#include<string.h>

float input(){
    float unit, total; 
    char user_name[10];
    char user_id[10];
    printf("Enter User name: ");
    scanf("%s", user_name);
    printf("Enter User id: ");
    scanf("%s", user_id);
    printf("Enter the number of units used: ");
    scanf("%f", &unit);
    
    printf("Customer id: %s\n", user_id);
    printf("Customer name: %s\n", user_name);
    printf("Unit consumed: %.2f\n", unit);
    
    if (unit <= 199) {
        total = (1.20 * unit);
        if (total > 400) {
             printf("Amount Charges @ RS1.20 per unit : %.02f\n",total);
            float total_1 = total * 0.15;
            total = total + total_1;
            printf("Subcharge Amount: %.2f\n", total_1);
            printf("Your total bill is: %.2f\n", total);
        } else {
             printf("Amount Charges @ RS1.20 per unit : %.02f\n",total);
            printf("Your total bill is: %.2f\n", total);
        }
    } else if (unit >= 200 && unit <= 400) {
        total = (1.50 * unit);
        if (total > 400) {
             printf("Amount Charges @ RS1.50 per unit : %.02f\n",total);
            float total_1 = total * 0.15;
            float sop = total + total_1;
            printf("Subcharge Amount: %.2f\n", total_1);
            printf("Your total bill is: %.2f\n", sop);
        } else {
             printf("Amount Charges @ RS1.50 per unit : %.02f\n",total);
            printf("Your total bill is: %.2f\n", total);
        }
    } else if (unit > 400 && unit <= 600) {
        total = (1.80 * unit);
        if (total > 400) {
            printf("Amount Charges @ RS1.80 per unit : %.02f\n",total);
            float total_2 = total * 0.15;
            float sum = total + total_2;
            printf("Subcharge Amount: %.2f\n", total_2);
            printf("Your total bill is: %.2f\n", sum);
        } else {
             printf("Amount Charges @ RS1.80 per unit : %.02f\n",total);
            printf("Your total bill is: %.2f\n", total);
        }
    } else {
        total = (2.0 * unit);
        if (total > 400) {
            printf("Amount Charges @ RS2.00 per unit : %.02f\n",total);
            float total_3 = total * 0.15;
            float result = total + total_3;
            printf("Subcharge Amount: %.2f\n", total_3);
            printf("Your total bill is: %.2f\n", result);
        } else {
            printf("Amount Charges @ RS2.00 per unit : %.02f\n",total);
            printf("Your total bill is: %.2f\n", total);
        }
    }
    return total;
}

int main(){
    float total_bill = input();
    return 0;
} 
