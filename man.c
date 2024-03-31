#include<stdio.h>
int cal()
{
   float first , second , result  ;
   char symbol;
   
     printf("Enter the first value ");
     scanf("%f", &first);
     printf("Enter the second  value   ");
     scanf("%f", &second);
     printf("Enter  Operation ' + ' '-' '*' '/' ");
     scanf(" %c", &symbol);
    switch (symbol)
    {
    case '+' :
         result  =  first + second ; 
        printf("sum is %.2f",result);
        break;
         case '-' :
        result =  first - second ; 
        printf("subtraction  is %.2f",result);
        break;
         case '/' :
          if (second != 0)
         {
          
        result =  first / second ;
        printf("divison  is %.2f",result);  
         }
          else{ 
              printf("Invalid input ");
              }
         break;
         case '*' :
        result =  first * second ; 
        printf("multiplication is %.2f",result);
         break;
        default:
         printf(" Invalid Input ");
         break;
    }
  
}    

 int main()
  { 
     cal();
     return 0;
  }