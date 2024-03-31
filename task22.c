#include <stdio.h>

int main() {
    int n;
    int count_even = 0;
    int count_odd = 0;
    int sum_even = 0;
    int sum_odd = 0;
    int count_zero = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            count_even++;
            sum_even += i;
        } else {
            count_odd++;
            sum_odd += i;
        }
        
        if (i == 0) {
            count_zero++;
        }
    }

    printf("Sum of even numbers is: %d\n", sum_even);
    printf("Total number of even numbers is: %d\n", count_even);
    printf("Sum of odd numbers is: %d\n", sum_odd);
    printf("Total number of odd numbers is: %d\n", count_odd);
    printf("Total number of zeros is: %d\n", count_zero);

    return 0;
}




