#include <stdio.h>

int main() {
    int n_terms;
    printf("Enter the number of terms you want to calculate: ");
    scanf("%d", &n_terms);

    double total_sum = 0;
    for (int i = 1; i <= n_terms; i++) {
        float factorial = 1;
        
        for (int j = 1; j <= i; j++) {
            factorial *= j;  
        }
        total_sum += (i + 1) / factorial;  
    }
    
    printf("The sum of the first %d terms of the series is: %.5f\n", n_terms, total_sum);
    
    return 0;
}
