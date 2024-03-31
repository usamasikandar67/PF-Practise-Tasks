#include<stdio.h>
int main() {
    int b = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            if (j%2==1)
            {
                printf("1");
            }
            else
            printf("0");
            
        }
        printf("\n");
    }
    return 0;
}
