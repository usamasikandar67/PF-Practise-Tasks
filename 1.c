#include<stdio.h>

int main() {
    int num;
    // Take input for the size of the array
    printf("Enter the size of an array: ");
    scanf("%d", &num);

    int arr[num];    

     int arr2[num];
    
    for(int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }
     int mul; 
     for (int i = 0; i < num ; i++)
     { 
       mul=arr[i]*arr2[i];
         printf(" multiplication is %d ",mul);
     }
     
    return 0;
}
