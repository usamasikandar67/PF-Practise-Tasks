#include<stdio.h>
#include<stdlib.h>
int main(){
     char a ,b ,c , d  , e ;
     printf("Enter character ");
     scanf("%c",&a);
    scanf("%c ",&b);
     scanf("%c ",&c);
     scanf(" %c",&d);
     scanf(" %c",&e);
     int  sum = a + b + c + d + e ;
     printf("Sum is %d\n",sum);
     int average = sum / 5 ;
     printf("Average is %d\n ", average); 
     if (average > 0 && average < 128)
     {
        printf("%c",average);
     }
     else
     printf("khrab");
     return 0; 
     
}