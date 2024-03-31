#include<stdio.h>
int check(int number){
     printf("Enter the number ");
     scanf("%d",&number);
     if (number<1000)
     {
       int result,first,second,third;
       first  = (number/100);
       second = ((number%100)/10);
       third  = ((number%100)%10);
       result = (third*100) + (second*10) + (first);
       if (number == result)
       {
          printf(" %d  is Palindrome ",number);
       }
       else
       printf("%d is not palindrome ",number);
        
     }
     else
     printf("Invalid Input ");
     
}
int main(){
    int number;
    check(number);
}