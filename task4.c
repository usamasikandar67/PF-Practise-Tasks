#include <stdio.h>

float account_balance = 10000;

void display() {
    printf("You have a total balance of %.2f\n", account_balance);
}

void withdraw(float amount) {
    if (amount <= 0) {
        printf("You entered an invalid amount.\n");
    } else if (amount > account_balance) {
        printf("You have insufficient funds.\n");
    } else {
        account_balance -= amount;
        printf("Withdrawal successful. Your remaining balance is %.2f\n", account_balance);
    }
}

int main() {
    char choice;
    float amount;

    printf("Enter 'r' to check balance or 'w' to withdraw amount: ");
    scanf(" %c", &choice);

    if (choice == 'r') {
        display();
    } else if (choice == 'w') {
        printf("Enter the amount to withdraw: ");
        scanf("%f", &amount);
        withdraw(amount);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
