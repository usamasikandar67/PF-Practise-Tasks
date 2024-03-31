#include<stdio.h>
int main(){

     int num;
     int fact = 1  ;
     printf("Enter the number ");
     scanf("%d",&num);
     for( int i=num;i>=1;i-- ){
        
        fact *=i;

     }
     printf(" %d factorial is %d ",num,fact);
     
     return 0;
}