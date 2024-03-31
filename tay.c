#include<stdio.h>

void fun(){
    float profit;
    int n =1;
    int id;
    int total;
    char option;
    
    printf("Enter yearly profit: ");
    scanf("%d", &total);
    
    while (n <= 1)
    {
        printf("ENTER Y FOR YES AND N FOR NO ");
        scanf(" %c",&option);
        switch (option)
        {
        case 'y':
        
            printf("Enter your id: ");
            scanf("%d", &id);
            
            if (id  == 12)
            {
                profit = total * 0.10;
                printf("Total profit for Jawad is %.2f\n", profit); 
            }
            else if (id == 29)
            {
                profit = total * 0.40;
                printf("Total profit for Hamid is %.2f\n", profit); 
            }
            else if (id == 39)
            {
                profit = total * 0.11;
                printf("Total profit for Ahmed is %.2f\n", profit); 
            }
            else if (id == 49)
            {
                profit = total * 0.09;
                printf("Total profit for Umar is %.2f\n", profit); 
            }
            else if (id == 69)
            {
                profit = total * 0.07;
                printf("Total profit for Zahid is %.2f\n", profit); 
            }
            else if (id == 89)
            {
                profit = total * 0.11;
                printf("Total profit for Saleem is %.2f\n", profit); 
            }
            else if (id == 59)
            {
                profit = total * 0.12;
                printf("Total profit for Hasan is %.2f\n", profit); 
            }
        
        continue;
        case 'n':
          printf("END OF THIS PROGRAM");
        
        break;
        default:
         printf("Wrong input!\n");
            break;
        }
        
       
           
    }
}

int main(){
    fun();
    return 0;
} 
