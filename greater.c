#include<stdio.h>
void series(int number){
     int first , second , next ;
     first = 0 ; second = 1; 
     printf("Fibnocii series upto %d ",number);
     for (int i = 0; i <= number; i++)
     {
        if (i<=1)
        {
          next = i;
        }
        else{
            next = first + second; 
            first = second ;
            second = next ;
        }
        printf("%d",next);
     }
     printf("\n");
     
}
int main(){
     int term;
     printf("Enter the terms ");
     scanf("%d",&term);
     series(term);
} 