#include<stdio.h>
int main(){
     int a , b , c ,d; 
     printf("Enter the value of a  and b ");
     scanf("%d%d",&a,&b);
     c=a/b;
     d=a%b;
     printf("Quotient is %d \n Reminder is %d ",c,d);
     return 0;
}