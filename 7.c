#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("The address is %d\n ", arr[5]);
    printf("The address of value %d\n ",&arr[0]);
    printf("The address of value %d\n ", arr);
    printf("The address of value %d\n ",&arr[1]);
    printf("The address of value %d\n ",arr+2);

    printf("The value of address %d\n ",*(&arr[0]));
    printf("The value of address %d\n ",*(arr));
    printf("The  value of address %d\n ",*(&arr[1]));
    printf("The value  of address %d\n ",*(arr+2));
    return 0;
}
  