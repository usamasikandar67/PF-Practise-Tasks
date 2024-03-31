#include<stdio.h>
int alpha(){
     int a,b,c;
        printf("Enter the value of a ");
        scanf("%d",&a);
          printf("Enter the value of b ");
          scanf("%d",&b);
           printf("Enter the value of c ");
           scanf("%d",&c);
     if(a<=10 && b>=10 && c>=15){
         int result= a+b+c;
         printf("%d", result);
     }
      else{
         printf("Wrong input ");
 
      
       }
       
       return 0;
} 
 int beta() { 
   int first,second;
   printf("Enter the value of first ");
   scanf("%d\n ", &first);
     printf("Enter the value of second  ");
   scanf("%d\n ", &second);
    if( first>second){
       printf(" first is greater than second ");

    }
     else{
       printf("second is greater than first ");
     }
     if(first==second){
       int sum = first + second;
       printf("  sum is  %d\n  ", sum);
     }
 }
  int main(){ 
     alpha();
 
      beta();
    return 0;
  }