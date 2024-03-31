#include<stdio.h>
int input(int number){
    
     printf("Enter number\n ");
     scanf("%d",&number);
    return 0;
}
int fun(int number){
      if (number%2==0)
      {
        printf("Number is even");

      }
      else
         printf("Number is ODD");
      
      return 0;
    
}
int main(){
   int number;
   input(number);   
   fun(number);
    return 0; 

}