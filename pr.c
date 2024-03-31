#include<stdio.h>
int main(){
     int n;
     printf("Enter the number ");
     scanf("%d",&n);
     (n%n==0 && n%2==1)?
        (n%3!=0 && n%5!=0)?
        printf("%d is prime ",n):
        printf("%d is not prime ",n):
      printf("Number is incorrect ");    
      return 0;

}