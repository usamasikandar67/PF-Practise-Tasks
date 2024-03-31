#include<stdio.h>
#include<stdlib.h>
int main(){
   int sum=0;
  float average;
  
  char array[15];
  for (int i = 0; i < 15; i++)
  {
    
    scanf(" %c",&array[i]);
  }
  for (int  i = 0; i <15; i++)
  {
    sum+=array[i];
    
  }
      printf("%d",sum);  
   average=sum/15;
   printf("%f",average); 
      return 0;

      
  
}