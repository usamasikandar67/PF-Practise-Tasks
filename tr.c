#include<stdio.h>
int celsius(){
    float celsiu,fahe;
    printf("Enter the temperature in Fahrnehiet  ");
    scanf("%.2f",&fahe);
    celsiu = (fahe - 32) * (5/9);
     printf("Temperature in celsius  is %.2f",celsiu);

  return 0 ;
}
int fahrenheit(){
    float temp_in_celsius,temp_in_fahe;
    printf("Enter the temperature in celsius ");
    scanf("%.2f",&temp_in_celsius);
     temp_in_fahe = (9/5*temp_in_celsius)+32;
     printf("Temperature in fahrenheit is %.2f ",temp_in_fahe);
  return 0;
    
}
int main(){
    char input;
     printf("//////////////////////////Welcome to  the menu////////////////////\n ");
     printf("Press 'C' to convert celsius to Fahrenheit \n Press 'F' to covert fahrenheit to celsius  ");
     scanf(" %c", &input);
     switch (input)
     {
     case 'c' :
        celsius();
        break;
     case 'f' :
    fahrenheit();
     break;
     default:
     printf("Invalid input ");
        break;
     }

}