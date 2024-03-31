#include<stdio.h>
int main()
{
     int num1, num2;
     printf("Enter number one ");
     scanf("%d",&num1);
     printf("Enter number two ");
     scanf("%d",&num2);
     int x = num1 ;
     int  y= num2 ; 
     while (num1 != num2)
     {
        if (num1> num2)
        {
            num1 = num1 - num2;
        }
        else 
            num2 = num2 - num1;
        
     }
     printf("Highest common Factor is %d\n",num1);
     int lcm = (x*y)/num1;
     printf("Least common multiple is %d ",lcm);
     return 0;
} 