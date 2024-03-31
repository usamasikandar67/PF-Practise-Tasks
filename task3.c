#include<stdio.h>
int main(){

     int rice, sugar, cooking_oil, tea, milk;
     int rice_kg, sugar_kg, cooking_oil_kg, tea_kg, milk_kg ;

     rice = 250 , sugar = 250 , cooking_oil = 400 , tea = 300 , milk = 200;
     printf("Enter the KG  of rice ");
        scanf("%d",&rice_kg);
         printf("Enter the KG of sugar ");
        scanf("%d",&sugar_kg);
         printf("Enter the KG of cooking_oil ");
        scanf("%d",&cooking_oil_kg);
         printf("Enter the KG of tea ");
        scanf("%d",&tea_kg);
         printf("Enter the KG of milk ");
        scanf("%d",&milk_kg);
        float rice_price = (rice*rice_kg);
        float sugar_price = (sugar*sugar_kg);
        float cooking_price = (cooking_oil*cooking_oil_kg);
        float tea_price = (tea*tea_kg);
        float milk_price = (milk*milk_kg);
        if (rice_price > 2000 )
        {
          float discount_rice_price = rice_price *0.1;
          float total_with_discount = rice_price - discount_rice_price;
          printf("total price with discount is %f\n",total_with_discount);
     
        }
        else
          printf("Total price rice is %f\n ",rice_price);
           if (sugar_price > 2000 )
        {
          float discount_sugar_price = rice_price *0.1;
          float total_with_discount_sugar = rice_price - discount_sugar_price;
          printf("total price with discount is %f\n",total_with_discount_sugar);
     
        }
        else
          printf("Total price rice is %f\n ",sugar_price);
           if (cooking_price > 2000 )
        {
          float discount_cooking_price = rice_price *0.1;
          float total_with_discount_cooking = rice_price - discount_cooking_price;
          printf("total price with discount is %f\n",total_with_discount_cooking);
     
        }
        else
          printf("Total price rice is %f\n ",cooking_price);
           if (tea_price > 2000 )
        {
          float discount_tea_price = rice_price *0.1;
          float total_with_discount_tea = rice_price - discount_tea_price;
          printf("total price with discount is %f\n",total_with_discount_tea);
     
        }
        else
          printf("Total price rice is %f\n ",tea_price);
           if (milk_price > 2000 )
        {
          float discount_milk_price = milk_price *0.1;
          float total_with_discount_milk = milk_price - discount_milk_price;
          printf("total price with discount is %f\n",total_with_discount_milk);
     
        }
        else
          printf("Total price rice is %f\n ",milk_price);
          
        

    float total= (rice*rice_kg) + (sugar*sugar_kg) +(cooking_oil*cooking_oil_kg) +(tea*tea_kg)+(milk*milk_kg) ;
    if (total> 2000)
    {

        float discount = total*0.1;
        printf("Total price is %.2f\n",total );
        float total_amount_with_discount= total - discount;
        printf("Your total bill with discount  is %.2fRs\n  ",total_amount_with_discount);
    }
     else {
         printf( " Total bill is Rs %.2f\n", total);
     }
    
}