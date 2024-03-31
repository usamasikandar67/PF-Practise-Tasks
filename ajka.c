#include<stdio.h>
int main(){
     int a = 10 , b = 20;  
     a = a + b;
     a = b - a;
     b = a - b;
     printf("%d %d ",a,b);
     return 0 ;
     

}